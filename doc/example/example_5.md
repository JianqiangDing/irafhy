# under approximation backward reach-ability analysis of example 5 using interval hull  {#example_5}

## System

```html
HYBRID_AUTOMATON
{
    NAME Example Model

    VARIABLES
    {
        x1, x2
    }

    LOCATIONS
    {
        MODEL
        {
            NAME controller
            FLOWS
            {
                x1' = x2
                x2' = -0.2*(x1^2-1)*x2-x1
            }
            INVARIANT_CONDITIONS
            {
            }
        }
    }

    TRANSITIONS
    {
    }
}
```

## Setting

```html
SETTINGS
{
    TIME_HORIZON := [0,2.3]
    STEP := 0.01
    GEOMETRY := INTERVAL_HULL
    PLOT := ON
    PRINT := OFF
    ANALYSIS := FORWARD #invalid setting, we force backward in the Analyser
    MAX_JUMP := 1
    START_MODEL_ID := controller #name of the model
    INITIAL_CONDITION :=
    CONDITION
    {
             INTERVAL_HULL
             {
             [1.2,1.5],
             [0.8,1.1]
             }
    }
}
```

## Result

here are some screenshots of the results

<p align="center">
    <img src="UABP_example5_3d.png" alt="3d" width="1500">
</p>

<p align="center">
    <img src="UABP_example5_0.png" alt="0" width="1500">
</p>

<p align="center">
    <img src="UABP_example5_1.png" alt="1" width="1500">
</p>

<p align="center">
    <img src="UABP_example5_2.png" alt="2" width="1500">
</p>