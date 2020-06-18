class StringExamples {
    public static void main(String args[]){

        String s = "JAVA PROGRAMMING";

        // char charAt(index)
        System.out.println(s.charAt(0));
        // J

        // int indexOf(c)
        System.out.println(s.indexOf('P'));
        // 5

        // int lastIndexOf(c)
        System.out.println(s.lastIndexOf('A'));
        // 10

        // boolean isEmpty(s)
        System.out.println(s.isEmpty());
        // false

        System.out.println(s.length());
        // 16

        System.out.println(s.startsWith("JAVA"));
        // true

        System.out.println(s.endsWith("ING"));
        // true

        System.out.println(s.contains("JAVA"));
        // true

        System.out.println(s.equals("JAVA PROGRAMMING"));
        // true

        System.out.println(s.equalsIgnoreCase("java programming"));
        // true

        System.out.println(s.compareTo("abcd"));
        // -23

        System.out.println(s.compareToIgnoreCase("abcd"));
        // 9

        System.out.println(s.concat("IS FUN"));
        // JAVA PROGRAMMING IS FUN

        System.out.println(s.replace('A','a'));
        // JaVa PROGRaMMING

        System.out.println(s.replaceFirst("J","j"));
        // jAVA PROGRAMMING


    }
}