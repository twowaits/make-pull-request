import java.time.LocalDate;
import java.time.temporal.ChronoUnit;
import java.util.ArrayList;
import java.util.List;

class Itinerary {
    public static void main(String[] args) throws Exception {
        LocalDate date = LocalDate.now();
        List<String> cities = new ArrayList<>();
        List<LocalDate> dates = new ArrayList<>();

        //Using data as given in the issue definition:

        cities.add("Delhi"); dates.add(date);

        date = date.plusDays(2);
        cities.add("Meerut"); dates.add(date);

        date = date.plusDays(3);
        cities.add("Noida"); dates.add(date);

        date = date.plusDays(1);
        cities.add("Kanpur"); dates.add(date);

        date = date.plusDays(2);
        cities.add("Lucknow"); dates.add(date);

        date = date.plusDays(0);
        cities.add("Delhi"); dates.add(date);



        Itinerary it = new Itinerary(cities, dates);
        String requiredItineraryString = it.generateReport();
        System.out.println("\n\n" + requiredItineraryString + "\n\n");
    }

    private List<String> cities;
    private List<LocalDate> dates;
    private int size;

    //Constructor
    public Itinerary(List<String> cities, List<LocalDate> dates) throws Exception {
        if(cities.size() != dates.size()){
            throw new Exception("Both arrays are not equal-sized.");
        }
        this.size = dates.size();

        if(this.size == 0){
            throw new Exception("Empty arrays. Enter at least one item.");
        }
        
        this.cities = cities;
        this.dates = dates;
        sortItinerary();
        //System.out.println("Itinerary of length " + cities.size() + " generated.");

    }

    //Required function!¯
    public String generateReport(){
        String report = header();

        for(int i=1; i < this.size; i++){
            //System.out.println(stringifyDate(dates.get(i)) );
            report += travel(i);
        }

        return report;
    }

    //Generates first line of the report
    public String header(){
        int startYear = dates.get(0).getYear();
        int lastYear = dates.get(size - 1).getYear();
        
        String years = startYear + "";
        if(startYear != lastYear){
            years += ("-" + lastYear);
        }

        String header = "Traveller Itinerary in " + years + ":\n";
        header += "Visited " + cities.get(0) + " on " + stringifyDate(dates.get(0)) + ". ";

        return header;
    }


    //Generates sentence for travel between two places
    private String travel(int i){
        long daysDiff = ChronoUnit.DAYS.between(dates.get(i-1), dates.get(i));
        if(daysDiff == 0){
            return "Didn't stay in " + cities.get(i-1) + " and went directly to " + cities.get(i) + ". ";
        }else{
            return "Stayed for " + daysDiff + " day" + (daysDiff>1 ? "s" : "") + ", then left for " + cities.get(i) + " on " + stringifyDate(dates.get(i)) + ". ";
        }
    }

    public String rankFromInt(int num){
        String rank = "" + num;
        
        if( (num % 10 == 1) && (num%100 != 11) ){
            rank += "st";
        }else if( (num % 10 == 2) && (num%100 != 12) ){
            rank += "nd";
        }else if( (num % 10 == 3) && (num%100 != 13) ){
            rank += "rd";
        }else{
            rank += "th";
        }

        return rank;
    }

    public String stringifyDate(LocalDate date){
        String shortMonth = "" + date.getMonth();
        shortMonth = shortMonth.substring(0, 1) + shortMonth.substring(1, 3).toLowerCase();
        return rankFromInt(date.getDayOfMonth()) + " " + shortMonth;
    }


    private void sortItinerary(){
        //Rearrange any off-dates and combine consecutive entries with same city
        return;
    }

}