# DX3D11_TerrainRendering

## Origin
http://www.rastertek.com/tutdx11s2ter.html

## Diagram
![pic4023](https://cloud.githubusercontent.com/assets/13383741/21643936/5a80712a-d2ce-11e6-8b76-9aca403e47dd.gif)

## Operation keys
↑: 전진  
↓: 후진  
← →: 회전  
A: 왼쪽이동  
D: 오른쪽이동  
W: 상승  
X: 하강  
PgUp: 시점 위 회전  
PgDn: 시점 아래 회전  
F1: 디스플레이 인터페이스 켜기/끄기  
F2: 와이어프레임 켜기/끄기  
F3: 상호작용 재생 켜기/끄기

## Report

### 2016-12-29(Tutorial 1 : Grid and Camera Movement)  
![default](https://cloud.githubusercontent.com/assets/13383741/21547893/439056c0-ce2c-11e6-9f80-9c2fae5e415a.PNG)  
1. 기본 지형 렌더링 구현  
2. 카메라 이동 구현  
3. 디스플레이 인터페이스 구현

### 2016-12-30(Tutorial 2 : Bitmap Height Maps)
#### *Wireframe*  
![wireframe](https://cloud.githubusercontent.com/assets/13383741/21567214/ba62a1ba-ceed-11e6-8453-7070b9fc1bbd.PNG)
#### *Solidframe*  
![solid](https://cloud.githubusercontent.com/assets/13383741/21567219/c1226594-ceed-11e6-9f2a-ee273e215f7c.PNG)
1. 비트맵 파일을 이용한 높이 맵 지형 구현  
2. 카메라 좌표, 각도 버그 수정  
3. 디스플레이 인터페이스 버그 수정  
4. 조작키 변경 및 추가  

### 2017-01-02(Tutorial 3 : Terrain Texturing)
#### *Headline*
![1](https://cloud.githubusercontent.com/assets/13383741/21581944/7825ce4c-d089-11e6-927e-b860b64155c9.PNG)  
#### *Ground Texture*
![2](https://cloud.githubusercontent.com/assets/13383741/21581949/b57295f0-d089-11e6-9312-64b7246fa785.PNG)  
#### *Test Texture*
![3](https://cloud.githubusercontent.com/assets/13383741/21581950/c5ae3690-d089-11e6-8396-ce0cd662f308.PNG)  
1. 텍스쳐 맵핑 구현  
  
### 2017-01-03(Tutorial 4 : Terrain Lighting)
#### *Ground Texture*  
![1](https://cloud.githubusercontent.com/assets/13383741/21688770/69298b7e-d3b1-11e6-972a-9c0ba21f9257.PNG)
#### *Test Texture*
![testtexture](https://cloud.githubusercontent.com/assets/13383741/21609034/7cb7a946-d203-11e6-8cd2-c286baa33ac7.PNG)
1. 조명 효과 구현

### 2017-01-05(Tutorial 5 : Color Mapped Terrain)
#### *Headline*
![2](https://cloud.githubusercontent.com/assets/13383741/21688771/692b50c6-d3b1-11e6-8b7b-92616636beb7.PNG)
1. 비트맵 파일을 이용한 색상 맵핑 구현

### 2017-01-07(Tutorial 6 : Terrain Normal Mapping)
-이번 단계는 가까이서만 확인할 수 있으므로 헤드라인 사진은 없습니다.
#### *Texture X, ColorMapping X*
![no texture colormapping](https://cloud.githubusercontent.com/assets/13383741/21742300/08996e26-d52f-11e6-9020-1ab6aea3890e.PNG)
#### *Texture O, ColorMppaing X*
![have texture no colormapping](https://cloud.githubusercontent.com/assets/13383741/21742301/08c468ec-d52f-11e6-983e-dce4673c890a.PNG)
#### *Texture O, ColorMppaing O*
![have texture colormapping](https://cloud.githubusercontent.com/assets/13383741/21742302/08ecdee4-d52f-11e6-8670-fd7ead45d656.PNG)
1. 지형 노말 맵핑 구현  
2. 이제부터 한 단계가 끝나면 제 생각을 쓸 것입니다.  

#### My Thinks  
이번 단계에선 노말 맵핑이라는 것을 배웠다.
내가 정확히 이해했는지는 모르겠지만 아마 한 텍스쳐를 위한 NormalMap 텍스쳐가 준비되어야 하는 것 같다.
그리고 노말 맵핑이란 NormalMap 텍스쳐를 이용하여 법선이란 의미의 Tangent와
종법선이란 의미의 Binormal을 이용하여 지형의 한 픽셀마다의 조명 정보를 얻어 렌더링 하는 기법인 것 같다.

전 단계에선 지형에 가까이 가면 뭉개진 느낌이 났는데 이번 단계에서 노말 맵핑을 하고 나니
눈에 잘 띄지는 않아도 가까이 가면 그 형태가 온전히 이루어져 있는것이 보여졌다.

정말 DirectX는 내가 무엇을 상상하든 그 이상을 보여주는 것 같다. 그래서 하면 할수록 재밌다.
HeightBitmap을 가지고 지형을 만들었을 때나 텍스쳐를 입히고 조명을 주고 컬러 맵핑을 했을때나
하나 같이 마지막에 실행을 했을땐 항상 감탄했었다.
앞으로 더 해야할 단계들이 남았지만 실행창을 보았을때의 느낌은 무뎌지지 않을 것 같다.

### 2017-01-09(Tutorial 7 :Sky Domes)
#### *Headline*
![1](https://cloud.githubusercontent.com/assets/13383741/21773265/bfc222ac-d6d1-11e6-8952-efec542a2681.PNG)
#### *LookAtSky*
![2](https://cloud.githubusercontent.com/assets/13383741/21773266/bfe9d22a-d6d1-11e6-8e98-e698e427ce13.PNG)
1. 스카이돔 렌더링 구현

#### My Thicks
이번 단계에서는 하늘을 그렸다.  
스카이돔의 여러 정보를 가지고있는 txt파일을 읽어들여서 데이터를 입력했는데  
rasterTek은 Maya를 이용하여 obj형식의 모델을 만들었다고 한다.  
내가 Maya를 몰라서 그런 걸 수도 있지만 obj형식으로 내보낸 파일이 어떻게 txt파일이 되었는지는 미지수이다.  
  
확실히 전 단계까지는 주위가 온통 까만색이어서 신경쓰였는데  
이번 단계에서 하늘을 그리니까 왠지 신이 된 기분이 들었다.  
  
나만 느끼는 걸 수도 있지만 일반적인 도스창을 보며 하는 프로그래밍도 없는 것을 만드는 느낌이 들어서 신 같았는데  
그래픽스 프로그래밍는 좀더 명확한 결과물이 있어서 그런지 유난히 신이 된 기분이다.  
  
다음번엔 실시간으로 시간이 지남에따라 하늘색이 바뀌는 것을 구현할 예정이다.  

### 2017-01-11(Update Function)
#### *LookAtNewUI*
![1](https://cloud.githubusercontent.com/assets/13383741/21847840/5dc60d86-d841-11e6-8fdf-3d0c3fe34b81.PNG)
1. ApexColor, CenterColor 수치 확인을 위한 인터페이스 구현

#### My Thicks
오늘은 UI추가를 했는데 기존에 있던 코드들이 어떻게 돌아가는지  
확실하게 이해하는데에는 스스로가 무언가를 생각해서 그걸 직접  
구현 해보는게 좋고 구현 능력도 느는 것 같다.  
  
새로 만든 인터페이스 덕에 앞으로의 실시간 하늘색 변경 구현을  
좀더 편하게 개발할 수 있을 것이다.  
