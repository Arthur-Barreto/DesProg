void segunda(int n) {
    printf("segunda");
    if (n == 1) {
        return;
    }
    segunda(n / 2);
}

/*

    para x par
    >4
    segunda
        >2
        segunda
            >1
            return
    
    >5
    segunda
        >2
        segunda
            >1
            return


*/