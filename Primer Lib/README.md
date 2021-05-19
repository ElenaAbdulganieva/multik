# South-Park-Cartoon
# Мультфильм  South Park

### Паламарчук Екатерина, 
### учитель информатики Лицея №13 г.Химки Московской области

#### Предлагаю Вашему вниманию мою интерпретацию мультсериала "South Park"

 Вы увидите аутентичные пейзажи, героев и альтернативные сцены из мультфильма.

![image](https://user-images.githubusercontent.com/82727720/115509225-dc48ad80-a286-11eb-9ad2-be0a4372b475.png)

### Герои South Park

#### Стен Марш
![изображение](https://user-images.githubusercontent.com/82727720/116804145-2e11f300-ab25-11eb-9fda-2c6faa5276d1.png)

#### Кайл Брофловски
![изображение](https://user-images.githubusercontent.com/82727720/116804339-a1683480-ab26-11eb-856c-314478640f60.png)

#### Кенни МакКормик
![изображение](https://user-images.githubusercontent.com/82727720/116804403-1f2c4000-ab27-11eb-885c-416e3b7ae908.png)

#### Эрик Картман
![изображение](https://user-images.githubusercontent.com/82727720/116804445-8ea22f80-ab27-11eb-96fa-e6aa42683819.png)

### Пейзажи South Park

#### Лесной пейзаж
![изображение](https://user-images.githubusercontent.com/82727720/116804578-75e64980-ab28-11eb-978d-acafdafe79d5.png)

#### Городской пейзаж
![изображение](https://user-images.githubusercontent.com/82727720/116804617-c9589780-ab28-11eb-8078-e6aefbc30598.png)

### Сцены мультфильма

#### Появление таблички "South Park"
![изображение](https://user-images.githubusercontent.com/82727720/116804686-5b60a000-ab29-11eb-9b7f-7cfe3a87857f.png)

#### Появление героев
![изображение](https://user-images.githubusercontent.com/82727720/116804744-f9ed0100-ab29-11eb-90c4-6adece1fe92e.png)

#### Очередная гибель Кенни
![изображение](https://user-images.githubusercontent.com/82727720/116804822-9e6f4300-ab2a-11eb-9077-ecca3111dd8b.png)

#### Финальная сцена "Они убили Кенни"
![изображение](https://user-images.githubusercontent.com/82727720/116805010-096d4980-ab2c-11eb-93f7-55340580028d.png)

Далее можно ознакомиться с функциями, которые используются в мультфильме.


 ## Описание используемых функций
 
 ### Рисование элементов пейзажа
```` 
1. Рисование фона
 void Draw_Background (COLORREF Sky_Color,    - цвет неба
                      COLORREF Ground_Color)  - цвет земли                      
````
````
2. Рисование горы
 void Draw_Mountain(int x,                    - координата X вершины
                    int y,                    - координата Y вершины 
                    COLORREF Mountain_Color)  - цвет
````
````                    
3. Рисование елки
 void Draw_Fir_tree (int x,                   - координата X левой точки нижней ветки
                     int y, 
                     COLORREF Fir_Tree_Color) - координата Y левой точки нижней ветки
````
````                                      
4. Рисование таблички "South Park"
 void Draw_Table (int x,                       - координата X левого верхнего угла
                  int y,                       - координата Y левого верхнего угла 
                  float sizeX,                 - масштабный коэффициент по оси X
                  float sizeY,                 - масштабный коэффициент по оси Y
                  COLORREF Table_Color)        - цвет  
````                  
````                  
5. Рисование канализационного люка
void Draw_Trap(COLORREF Ground_Color,          - цвет земли 
               COLORREF Trap_Color)            - цвет люка
````
````
6. Рисование окна дома
void Draw_Window(int x,                        - координата X левого верхнего угла 
                 int y,                        - координата Y левого верхнего угла   
                 int lx,                       - ширина
                 int ly)                       - высота
````
````                 
7. Рисование горной цепи
void Draw_Mountain_Chain()

````
````
8. Рисование городского пейзажа
void Draw_Landscape_Town()

````
````
9. Рисование лесного пейзажа 
void Draw_Landscape_Forrest()

````
### Функции рисования частей тела героев

````
1. Рисование туловища
void Draw_Body(int x,                          - координата X центра героя (центр головы) 
               int y,                          - координата Y центра героя (центр головы) 
               float sizeX,                    - масштабный коэффициент по оси X                     
               float sizeY,                    - масштабный коэффициент по оси Y
               int Jump,                       - высота прыжка
               COLORREF Color,                 - цвет 
               int is_Cartman);                - признак Картмана
````
````               
2. Рисование левой руки
void Draw_Left_Hand (int x,                    - координата X центра героя (центр головы) 
                     int y,                    - координата Y центра героя (центр головы) 
                     float sizeX,              - масштабный коэффициент по оси X 
                     float sizeY,              - масштабный коэффициент по оси Y 
                     int Jump,                 - высота прыжка
                     int Rise_Left_Hand,       - признак поднятия руки
                     int Stretch_Left_Hand,    - признак вытягивания руки
                     COLORREF Hand_Color,      - цвет руки
                     COLORREF Wrist_Color,     - цвет кисти
                     int Turn_Left,            - поворот героя влево 
                     int Turn_Right,           - поворот героя вправо
                     int is_Cartman);          - признак Картмана
````
````                                          
3. Рисование правой руки
void Draw_Left_Hand (int x,                    - координата X центра героя (центр головы) 
                     int y,                    - координата Y центра героя (центр головы) 
                     float sizeX,              - масштабный коэффициент по оси X 
                     float sizeY,              - масштабный коэффициент по оси Y 
                     int Jump,                 - высота прыжка
                     int Rise_Right_Hand,      - признак поднятия руки
                     int Stretch_Right_Hand,   - признак вытягивания руки
                     COLORREF Hand_Color,      - цвет руки
                     COLORREF Wrist_Color,     - цвет кисти руки
                     int Turn_Left,            - поворот героя влево 
                     int Turn_Right,           - поворот героя вправо
                     int is_Cartman);          - признак Картмана
````
````                     
4. Рисование глаз
void Draw_Eyes (int x,                         - координата X центра героя (центр головы)  
                int y,                         - координата Y центра героя (центр головы)  
                float sizeX,                   - масштабный коэффициент по оси X
                float sizeY,                   - масштабный коэффициент по оси Y 
                int Jump,                      - высота прыжка
                int Close_Eyes,                - признак закрытия глаз
                int Turn_Left,                 - поворот героя влево 
                int Turn_Right);               - поворот героя вправо
````
````                                
5. Рисование рта
void Draw_Mouth (int x,                        - координата X центра героя (центр головы)
                 int y,                        - координата Y центра героя (центр головы)  
                 float sizeX,                  - масштабный коэффициент по оси X                   
                 float sizeY,                  - масштабный коэффициент по оси Y                 
                 int Jump,                     - высота прыжка
                 int Open_Mouth,               - признак открытого рта
                 int Turn_Left,                - поворот героя влево 
                 int Turn_Right);              - поворот героя вправо
````
````                                  
6. Рисование лица
void Draw_Face (int x,                         - координата X центра героя (центр головы) 
                int y,                         - координата Y центра героя (центр головы)  
                float sizeX,                   - масштабный коэффициент по оси X 
                float sizeY,                   - масштабный коэффициент по оси Y
                int Jump,                      - высота прыжка
                COLORREF Face_Color,           - цвет
                int is_Cartman);               - признак Картмана
````
````                                
7. Рисование ног
void Draw_Legs (int x,                         - координата X центра героя (центр головы)
                int y,                         - координата Y центра героя (центр головы) 
                float sizeX,                   - масштабный коэффициент по оси X 
                float sizeY,                   - масштабный коэффициент по оси Y                 
                int Jump,                      - высота прыжка
                int is_Cartman);               - признак Картмана
````
````                              
8. Рисование шапки 
void Draw_Hat (int x,                          - координата X центра героя (центр головы)
               int y,                          - координата Y центра героя (центр головы)
               float sizeX,                    - масштабный коэффициент по оси X 
               float sizeY,                    - масштабный коэффициент по оси Y 
               int Jump, 
               COLORREF Hat_Color,             - цвет шапки
               COLORREF Pompon_Color,          - цвет помпона
               int is_Cartman);                - признак Картмана
````
````                             
9. Рисование шапки Брофловского
void Draw_Broflovsky_Hat (int x,               - координата X центра героя (центр головы)
                          int y,               - координата Y центра героя (центр головы)
                          float sizeX,         - масштабный коэффициент по оси X
                          float sizeY,         - масштабный коэффициент по оси Y
                          int Jump             - высота прыжка
                          int Turn_Left,       - поворот героя влево 
                          int Turn_Right);     - поворот героя вправо  
````
````                                                    
10. Рисование головы Кенни
void Draw_Kenny_Had (int x,                    - координата X центра героя (центр головы)
                     int y,                    - координата Y центра героя (центр головы)
                     float sizeX,              - масштабный коэффициент по оси X
                     float sizeY,              - масштабный коэффициент по оси Y
                     int Jump);                - высота прыжка
                  
````   

###  Функции рисования героев

````
1. Рисование Стена Марша
void Draw_Sten (int x,                         - координата X центра героя (центр головы) 
                int y,                         - координата Y центра героя (центр головы)
                float sizeX,                   - масштабный коэффициент по оси X
                float sizeY,                   - масштабный коэффициент по оси Y
                COLORREF Body_Color,           - цвет туловища 
                COLORREF Face_Color,           - цвет лица 
                COLORREF Wrist_Color,          - цвет кисти рук
                int Rise_Left_Hand,            - признак поднятия левой руки
                int Rise_Right_Hand,           - признак поднятия правой руки
                int Stretch_Left_Hand,         - признак вытягивания левой руки
                int Stretch_Right_Hand,        - признак вытягивания правой руки
                int Close_Eyes,                - признак закрытия глаз
                int Open_Mouth,                - признак открытия рта
                int Jump,                      - высота прыжка
                int Turn_Left,                 - поворот героя влево   
                int Turn_Right );              - поворот героя вправо               
````
````                                          
2. Рисование Кайла Брофловски
void Draw_Broflovsky (int x,                   - координата X центра героя (центр головы) 
                      int y,                   - координата Y центра героя (центр головы)
                      float sizeX,             - масштабный коэффициент по оси X
                      float sizeY,             - масштабный коэффициент по оси Y
                      COLORREF Body_Color,     - цвет туловища 
                      COLORREF Face_Color,     - цвет лица 
                      COLORREF Wrist_Color,    - цвет кисти рук
                      int Rise_Left_Hand,      - признак поднятия левой руки
                      int Rise_Right_Hand,     - признак поднятия правой руки
                      int Stretch_Left_Hand,   - признак вытягивания левой руки
                      int Stretch_Right_Hand,  - признак вытягивания правой руки
                      int Close_Eyes,          - признак закрытия глаз
                      int Open_Mouth,          - признак открытия рта
                      int Jump,                - высота прыжка
                      int Turn_Left,           - поворот героя влево   
                      int Turn_Right );        - поворот героя вправо                      
````
````                      
3. Рисование Кенни Маккормика
void Draw_Broflovsky (int x,                   - координата X центра героя (центр головы) 
                      int y,                   - координата Y центра героя (центр головы)
                      float sizeX,             - масштабный коэффициент по оси X
                      float sizeY,             - масштабный коэффициент по оси Y
                      COLORREF Body_Color,     - цвет туловища 
                      COLORREF Face_Color,     - цвет лица 
                      COLORREF Wrist_Color,    - цвет кисти рук
                      int Rise_Left_Hand,      - признак поднятия левой руки
                      int Rise_Right_Hand,     - признак поднятия правой руки
                      int Stretch_Left_Hand,   - признак вытягивания левой руки
                      int Stretch_Right_Hand,  - признак вытягивания правой руки
                      int Close_Eyes,          - признак закрытия глаз
                      int Jump,                - высота прыжка
                      int Turn_Left,           - поворот героя влево   
                      int Turn_Right );        - поворот героя вправо                      
````
````                      
4. Рисование Эрика Картмана
void Draw_Cartman (int x,                      - координата X центра героя (центр головы) 
                   int y,                      - координата Y центра героя (центр головы)
                   float sizeX,                - масштабный коэффициент по оси X
                   float sizeY,                - масштабный коэффициент по оси Y
                   COLORREF Body_Color,        - цвет туловища 
                   COLORREF Face_Color,        - цвет лица 
                   COLORREF Wrist_Color,       - цвет кисти рук
                   int Rise_Left_Hand,         - признак поднятия левой руки
                   int Rise_Right_Hand,        - признак поднятия правой руки
                   int Stretch_Left_Hand,      - признак вытягивания левой руки
                   int Stretch_Right_Hand,     - признак вытягивания правой руки
                   int Close_Eyes,             - признак закрытия глаз
                   int Open_Mouth,             - признак открытия рта
                   int Jump,                   - высота прыжка
                   int Turn_Left,              - поворот героя влево   
                   int Turn_Right );           - поворот героя вправо                  
````

### Рисование титров
````
1. Рисование стартовы титров
void Draw_Start_Titres();

````
````
2. Рисование финальных титров
void Draw_Final_Titres();
....

### Рисование сцен мультфильма
....
1. Рисование сцены появления таблицы "South Park"
void Draw_Table_Fly();
````
````
2. Рисование сцены приветствия героев
void Draw_Greeting();
````
````
3. Рисование сцены появления героев
void Draw_Arrival();
````
````
4. Рисование летящего Стена в сцене появления героев
Draw_Sten_Fly();
````
````
5. Рисование летящего Брофловски в сцене появления героев
Draw_Broflovsky_Fly();
````
````
6. Рисование летящего Кенни в сцене появления героев
Draw_Kenny_Fly();

````
````
7. Рисование летящего Картмана в сцене появления героев
Draw_Cartman_Fly();
````
````
8. Рисование Стена, Брофловски, Кенни и Картмана в сцене появления героев
Draw_Sten_Brodlovsky_Kenny_Cartman();
````
````
9. Рисование главной сцены мультфильма - очередная гибель Кенни
void Draw_Main_Scene();
````
````
10. Рисование сцены приближения Стена и Брофловски
void Draw_Increase_Herows();
````
````
11. Рисование сцены, где увеличенный Стен мограет от возмущения
void Draw_Sten_BlinK();
````
````
12. Рисование сцены, где увеличенный Стен говорит: "Они снова убили Кенни!"
void Draw_Sten_Talk();
````
````
13. Рисование сцены, где увеличенный Брофловски мограет от возмущения
void Draw_Broflovsky_BlinK();
````
````
12. Рисование сцены, где увеличенный Брофловски говорит: " You, bastards!"
void Draw_Broflovsky_Talk();
````
