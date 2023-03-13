data("mtcars")
mtcars

# view in table
View(mtcars)

# ? indicates help
?mtcars

hist(mtcars$mpg, main = "Histogram of MPG", xlab = "MPG", breaks = 10)
# Figure 1: Histogram of Miles per Gallon (MPG) of mtcars.
# The plot shows mpg is unimodal and skewed to the right.

# Boxplot of mpg for all cars
boxplot(mtcars$mpg, main = "Boxplot of MPG", xlab = "MPG")

# Separate histograms for automatic or manual transmission
hist(mtcars$mpg[mtcars$am == "0"],
    main = "Histogram of MPG of cars with automatic transmission",
    xlab = "MPG",
    breaks = 8
)
