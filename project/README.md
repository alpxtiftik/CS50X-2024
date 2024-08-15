# esualife.com
#### Video Demo: https://www.youtube.com/watch?v=1puNbtFxrTQ
#### Description: A website that my father has been asking me to create for his shop for years.


This project contains the files that make up the website of ESUA Life Water Treatment Technologies. The website has been designed and developed in accordance with modern web development standards. Detailed information about the project structure is given below.
# Project Files
```
/css
  - bootstrap.css
  - font-awesome.min.css
  - style.css
  - responsive.css
  - style.css.map
  - stle.scss
/images
  - favicon.png
  - hero-bg.png
  - slider-img.png
  - about-img.png
  - s1.png
  - s2.png
  - s3.png
  - w1.png
  - w2.png
  - w3.png
  - next.png
  - prev.png
index.html
about.html
service.html
why.html
```

## .html Files
I placed elements such as paragraphs, headings, links, images, lists. With HTML, I created the skeleton of the web page and told the browser how to organize these elements.
### index.html
**Doctype and HTML Tag**

```
<!DOCTYPE html>
<html>
```

**Head Section**

The head section includes meta tags for character encoding, viewport settings, and compatibility. It also links to various CSS stylesheets and fonts to ensure proper styling and responsiveness.

```
<head>
  <!-- Basic -->
  <meta charset="utf-8" />
  <meta https-equiv="X-UA-Compatible" content="IE=edge" />
  <!-- Mobile Metas -->
  <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
  <!-- Site Metas -->
  <meta name="keywords" content="" />
  <meta name="description" content="" />
  <meta name="author" content="" />
  <link rel="shortcut icon" href="images/favicon.png" type="">

  <title> ESUA Life </title>

  <!-- bootstrap core css -->
  <link rel="stylesheet" type="text/css" href="css/bootstrap.css" />

  <!-- fonts style -->
  <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@400;500;700;900&display=swap" rel="stylesheet">

  <!--owl slider stylesheet -->
  <link rel="stylesheet" type="text/css" href="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/assets/owl.carousel.min.css" />

  <!-- font awesome style -->
  <link href="css/font-awesome.min.css" rel="stylesheet" />

  <!-- Custom styles for this template -->
  <link href="css/style.css" rel="stylesheet" />
  <!-- responsive style -->
  <link href="css/responsive.css" rel="stylesheet" />

</head>
```

**Body Section**

The body section contains various components that make up the website's user interface, such as the header, slider section, service section, about section, why section and footer.
1. Header Section

This includes the navigation bar with links to different pages of the website like Home, About, Services, and Why Us.

```
<!-- header section strats -->
    <header class="header_section">
      <div class="container-fluid">
        <nav class="navbar navbar-expand-lg custom_nav-container ">
          <a class="navbar-brand" href="index.html">
            <span>
              ESUA Life
            </span>
          </a>

          <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span class=""> </span>
          </button>

          <div class="collapse navbar-collapse" id="navbarSupportedContent">
            <ul class="navbar-nav  ">
              <li class="nav-item active">
                <a class="nav-link" href="index.html">Ana Sayfa<span class="sr-only">(current)</span></a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="about.html">Hakkımızda</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="service.html">Ürünler & Çözümler</a>
              </li>
              <li class="nav-item">
                <a class="nav-link" href="why.html">Neden Biz ?</a>
              </li>
            </ul>
          </div>
        </nav>
      </div>
    </header>
    <!-- end header section -->``

2. Slider Section

This section contains a carousel with slides showcasing ESUA Life’s mission and contact information.

``<!-- slider section -->
    <section class="slider_section ">
      <div id="customCarousel1" class="carousel slide" data-ride="carousel">
        <div class="carousel-inner">
          <div class="carousel-item active">
            <div class="container ">
              <div class="row">
                <div class="col-md-6 ">
                  <div class="detail-box">
                    <h1>
                      ESUA Life <br>
                      Eskişehir Su Arıtma Teknolojileri
                    </h1>
                    <font size="5" color = "#ffffff">Temiz Su, Temiz Gelecek.</font>
                    <div class="btn-box">
                    </div>
                  </div>
                </div>
                <div class="col-md-6">
                  <div class="img-box">
                    <img src="images/slider-img.png" alt="">
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div class="carousel-item ">
            <div class="container ">
              <div class="row">
                <div class="col-md-6 ">
                  <div class="detail-box">
                    <h1>
                      ESUA Life <br>
                      Eskişehir Su Arıtma Teknolojileri
                    </h1>
                    <a href="https://www.google.com/maps/place/ESUA+Life+Su+Ar%C4%B1tma+Teknolojileri/@39.782624,30.511739,16z/data=!4m6!3m5!1s0x14cc154df06340e3:0x3fd7576cc3da5a2f!8m2!3d39.7826243!4d30.5117392!16s%2Fg%2F11kj6whcqf?hl=tr&entry=ttu" target="_blank" rel="noreferrer noopener">
                      <font size="5" color ="ffffff">Adres: Eskibağlar, Espark AVM Otopark Karşısı, Cidde Sk. No: 3, 26170 Tepebaşı/Eskişehir</font>
                    </a>
                    <p></p>
                    <a href="tel:05526287860">
                      <font size="5" color ="ffffff">Telefon No: 0552 628 7860</font>
                    </a>
                    <p></p>
                    <a href="https://www.instagram.com/esualife/" target="_blank" rel="noreferrer noopener">
                      <font size="5" color ="ffffff">Instagram: esualife</font>
                    </a>
                    <p></p>
                    <a href="mailto:esualife@hotmail.com">
                      <font size="5" color ="ffffff">E-Mail: esualife@hotmail.com</font>
                    </a>
                    <div class="btn-box">
                    </div>
                  </div>
                </div>
                <div class="col-md-6">
                  <div class="img-box">
                    <img src="images/slider-img.png" alt="">
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div class="carousel-item">
            <div class="container ">
              <div class="row">
                <div class="col-md-6 ">
                  <div class="detail-box">
                    <h1>
                      ESUA Life <br>
                      Eskişehir Su Arıtma Teknolojileri
                    </h1>
                    <font size="5" color = "#ffffff">ESUA Life Su Arıtma Teknolojileri olarak, yaşam kalitenizi artırmak için en ileri teknolojilerle donatılmış su arıtma çözümleri sunuyoruz. Sağlıklı, temiz ve güvenilir suya erişiminiz için her zaman yanınızdayız.</font>
                    <div class="btn-box">
                    </div>
                  </div>
                </div>
                <div class="col-md-6">
                  <div class="img-box">
                    <img src="images/slider-img.png" alt="">
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
        <ol class="carousel-indicators">
          <li data-target="#customCarousel1" data-slide-to="0" class="active"></li>
          <li data-target="#customCarousel1" data-slide-to="1"></li>
          <li data-target="#customCarousel1" data-slide-to="2"></li>
        </ol>
      </div>

    </section>
    <!-- end slider section -->
  </div>
  ```

3. Service Section

This section provides information on various services offered by ESUA Life, including sales and installation, filter changes, and maintenance.

```
<!-- service section -->

  <section class="service_section layout_padding">
    <div class="service_container">
      <div class="container ">
        <div class="heading_container heading_center">
          <h2>
            Ürünlerimiz & Çözümlerimiz
          </h2>
          <p>
            ESUA Life Su Arıtma Teknolojileri olarak sizler için çeşitli su arıtma çözümleri ve ürünler sunuyoruz. Evlerinizde, iş yerlerinizde ve endüstriyel alanlarda temiz ve sağlıklı suya kolayca ulaşmanız için en son teknolojiye sahip sistemlerimizle hizmetinizdeyiz.
          </p>
          <a href="tel:05526287860">
            <font size="4" color ="00000000">Daha fazla bilgi için lütfen arayın: 0552 628 7860</font>
          </a>
        </div>
        <div class="row">
          <div class="col-md-4 ">
            <div class="box ">
              <div class="img-box">
                <img src="images/s1.png" alt="">
              </div>
              <div class="detail-box">
                <h5>
                  Satış ve Montaj
                </h5>
                <p>
                  Ev Tipi Su Arıtma Sistemleri: Tezgah altı, tezgah üstü ve tüm ev sistemleri ile evinizde her zaman temiz su.
                </p>
                <p>
                  Endüstriyel Tip Su Arıtma Sistemleri: Fabrikalar, oteller ve restoranlar için yüksek kapasiteli çözümler.
                </p>
                <p>
                  Özel Su Arıtma Sistemleri: İhtiyaçlarınıza özel tasarlanmış sistemler ve profesyonel montaj hizmetleri.
                </p>
              </div>
            </div>
          </div>
          <div class="col-md-4 ">
            <div class="box ">
              <div class="img-box">
                <img src="images/s2.png" alt="">
              </div>
              <div class="detail-box">
                <h5>
                  Filtre Değişim
                </h5>
                <p>
                  Su arıtma sistemlerinizin en yüksek verimlilikte çalışmasını sağlamak için düzenli filtre değişimleri gereklidir. ESUA Life olarak, su arıtma cihazlarınızın filtrelerini zamanında ve doğru şekilde değiştirerek suyunuzun her zaman temiz kalmasını sağlıyoruz.
                </p>
              </div>
            </div>
          </div>
          <div class="col-md-4 ">
            <div class="box ">
              <div class="img-box">
                <img src="images/s3.png" alt="">
              </div>
              <div class="detail-box">
                <h5>
                  Bakım
                </h5>
                <p>
                  Su arıtma sistemlerinizin uzun ömürlü ve sorunsuz çalışması için düzenli bakım hizmetleri sunuyoruz. Uzman teknisyenlerimiz, sistemlerinizin performansını kontrol eder, gerekli ayarlamaları yapar ve olası sorunları önceden tespit ederek, su arıtma cihazlarınızın her zaman en iyi şekilde çalışmasını sağlar.
                </p>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>

  <!-- end service section -->
  ```

4. About Section

This section provides information about ESUA Life, emphasizing their commitment to providing advanced water purification technologies.

```
<!-- about section -->

  <section class="about_section layout_padding">
    <div class="container  ">
      <div class="heading_container heading_center">
        <h2>
          Hakkımızda
        </h2>
        <p>
          Temiz Su, Temiz Gelecek.
        </p>
      </div>
      <div class="row">
        <div class="col-md-6 ">
          <div class="img-box">
            <img src="images/about-img.png" alt="">
          </div>
        </div>
        <div class="col-md-6">
          <div class="detail-box">
            <h3>
              ESUA Life
            </h3>
            <p>
              ESUA Life Su Arıtma Teknolojileri olarak, yaşam kalitenizi artırmak için en ileri teknolojilerle donatılmış su arıtma çözümleri sunuyoruz. Sağlıklı, temiz ve güvenilir suya erişiminiz için her zaman yanınızdayız.
            </p>
            <p>
              Günümüzde temiz su kaynaklarına ulaşmak her zamankinden daha önemli hale geldi. Kirlilik, kimyasallar ve mikroorganizmalar sağlığımızı tehdit edebilir. Bu nedenle, su arıtma sistemleri evinizde ve işyerinizde güvenle kullanabileceğiniz temiz su sağlar.
            </p>
            <p>
              ESUA Life olarak, yenilikçi ve sürdürülebilir su arıtma çözümleriyle sektörde öncü bir konumdayız. Ürünlerimiz, en yüksek kalite standartlarına göre üretilmiş olup, suyunuzun saflığını garanti eder. Uzman ekibimiz, ihtiyaçlarınıza uygun en iyi çözümleri sunmak için sürekli olarak çalışmaktadır
            </p>
          </div>
        </div>
      </div>
    </div>
  </section>

  <!-- end about section -->
  ```

  5. Why Section

  This section provides information about why customers should choose ESUA Life.


```
<!-- why section -->

  <section class="why_section layout_padding">
    <div class="container">
      <div class="heading_container heading_center">
        <h2>
          Neden Bizi Seçmelisiniz ?
        </h2>
      </div>
      <div class="why_container">
        <div class="box">
          <div class="img-box">
            <img src="images/w1.png" alt="">
          </div>
          <div class="detail-box">
            <h5>
              Uzman Ekip
            </h5>
            <p>
              ESUA Life olarak, su arıtma teknolojileri konusunda geniş bilgi ve deneyime sahip bir ekip ile çalışıyoruz. Profesyonel kadromuz, ihtiyaçlarınıza en uygun çözümleri sunmak için her zaman hazırdır. Sürekli eğitimlerle güncel teknolojilere hakim olan ekibimiz, size en kaliteli hizmeti sunar.
            </p>
          </div>
        </div>
        <div class="box">
          <div class="img-box">
            <img src="images/w2.png" alt="">
          </div>
          <div class="detail-box">
            <h5>
              Mutlu Müşteriler
            </h5>
            <p>
              Müşteri memnuniyeti bizim için en önemli önceliktir. Bugüne kadar hizmet verdiğimiz tüm müşterilerimiz, aldıkları hizmetten memnun kalmış ve bizi güvenle tavsiye etmiştir. Müşterilerimizin olumlu geri bildirimleri, kaliteli hizmet anlayışımızın bir göstergesidir.
          </div>
        </div>
        <div class="box">
          <div class="img-box">
            <img src="images/w3.png" alt="">
          </div>
          <div class="detail-box">
            <h5>
              Kişiselleştirilmiş Çözümler
            </h5>
            <p>
              Her müşterimizin ihtiyaçları farklıdır ve biz de bu ihtiyaçlara özel çözümler sunarız. Suyunuzun kalitesini artırmak için standart çözümler yerine, sizin özel ihtiyaçlarınıza yönelik sistemler tasarlarız. Bu sayede, en verimli ve etkili su arıtma deneyimini yaşarsınız.
            </p>
          </div>
        </div>
      </div>
    </div>
  </section>

  <!-- end why section -->
  ```


 6. Info and Footer Section

 This includes contact information, social media links, and additional navigation links.

  ```
  <!-- info section -->

  <section class="info_section layout_padding2">
    <div class="container">
      <div class="row">
        <div class="col-md-6 col-lg-3 info_col">
          <div class="info_contact">
            <h4>
              İletişim Bilgileri
            </h4>
            <div class="contact_link_box">
              <a href="https://www.google.com/maps/place/ESUA+Life+Su+Ar%C4%B1tma+Teknolojileri/@39.782624,30.511739,16z/data=!4m6!3m5!1s0x14cc154df06340e3:0x3fd7576cc3da5a2f!8m2!3d39.7826243!4d30.5117392!16s%2Fg%2F11kj6whcqf?hl=tr&entry=ttu" target="_blank" rel="noreferrer noopener">
                <i class="fa fa-map-marker" aria-hidden="true"></i>
                <span>
                  Eskibağlar, Espark AVM Otopark Karşısı, Cidde Sk. No: 3, 26170 Tepebaşı/Eskişehir
                </span>
              </a>
              <a href="tel:05526287860">
                <i class="fa fa-phone" aria-hidden="true"></i>
                <span>
                  0552 628 78 60
                </span>
              </a>
              <a href="mailto:esualife@hotmail.com">
                <i class="fa fa-envelope" aria-hidden="true"></i>
                <span>
                  esualife@hotmail.com
                </span>
              </a>
            </div>
          </div>
          <div class="info_social">
            <a href="https://www.instagram.com/esualife/" target="_blank" rel="noreferrer noopener">
              <i class="fa fa-instagram" aria-hidden="true"></i>
            </a>
            <a href="https://www.facebook.com/profile.php?id=100091468461393&locale=tr_TR" target="_blank" rel="noreferrer noopener">
              <i class="fa fa-facebook" aria-hidden="true"></i>
            </a>
          </div>
        </div>
        <div class="col-md-6 col-lg-3 info_col">
          <div class="info_detail">
            <h4>
              ESUA Life
            </h4>
            <p>
              Temiz Su, Temiz Gelecek.
            </p>
          </div>
        </div>
        <div class="col-md-6 col-lg-2 mx-auto info_col">
          <div class="info_link_box">
            <h4>
              Links
            </h4>
            <div class="info_links">
              <a class="active" href="index.html">
                Ana Sayfa
              </a>
              <a class="" href="about.html">
                Hakkımızda
              </a>
              <a class="" href="service.html">
                Ürünler & Çözümler
              </a>
              <a class="" href="why.html">
                Neden Biz ?
              </a>
            </div>
          </div>
        </div>
        <div class="col-md-6 col-lg-3 info_col ">
          <p>
            <iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3066.086048264834!2d30.509164275666368!3d39.78262427154857!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x14cc154df06340e3%3A0x3fd7576cc3da5a2f!2sESUA%20Life%20Su%20Ar%C4%B1tma%20Teknolojileri!5e0!3m2!1str!2str!4v1722431151889!5m2!1str!2str" width="400" height="300" style="border:0;" allowfullscreen="" loading="lazy" referrerpolicy="no-referrer-when-downgrade"></iframe>
          </p>
        </div>
      </div>
    </div>
  </section>

  <!-- end info section -->

  <!-- footer section -->
  <section class="footer_section">
    <div class="container">
      <p>
        &copy; <span id="displayYear"></span> Tüm Hakları Saklıdır -
        <a href="https://github.com/alpxtiftik" target="_blank" rel="noreferrer noopener">alpxtiftik</a>
      </p>
    </div>
  </section>
  <!-- footer section -->

  <!-- jQery -->
  <script type="text/javascript" src="js/jquery-3.4.1.min.js"></script>
  <!-- popper js -->
  <script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous">
  </script>
  <!-- bootstrap js -->
  <script type="text/javascript" src="js/bootstrap.js"></script>
  <!-- owl slider -->
  <script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/OwlCarousel2/2.3.4/owl.carousel.min.js">
  </script>
  <!-- custom js -->
  <script type="text/javascript" src="js/custom.js"></script>
  <!-- Google Map -->
  <script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyCh39n5U-4IoWpsVGUHWdqB6puEkhRLdmI&callback=myMap">
  </script>
  <!-- End Google Map -->

</body>

</html>
```


### about.html
Since this page is the same as part **about section** on the **index.html**, I did not explain it again.
### service.html
Since this page is the same as part **service section** on the **index.html**, I did not explain it again.
### why.html
Since this page is the same as part **why section** on the **index.html**, I did not explain it again.



## .css Files
I edited the style and appearance of the content I added with HTML. I determined the colors, fonts, spacing, borders and layout of the web page. With CSS, I made my web page more aesthetic and user-friendly.

### bootstrap.css
Bootstrap is a popular CSS framework used to develop responsive and mobile-first web projects. This file contains Bootstrap's CSS styling rules.
### font-awesome.min.css
Font Awesome is one of the popular icon sets used on websites and projects. The "min" extension indicates that this file has been minimized. This means that the file is optimized to load faster.
### responsive.css
This file contains the CSS rules that make my site responsive. So, these rules ensure that my site adapts to different device screen sizes.
### style.css
This file contains the general style rules of my site. I defined the special style rules and general design details here. While writing these codes, I used ChatGPT in some places.
### style.css.map
This is a source map file. It allows browsers to fall back to the original source code of a minified CSS file (usually generated by a preprocessor like SASS or LESS). Useful for debugging.
### style.scss
This is a SASS (Syntactically Awesome Style Sheets) file. SASS is a CSS preprocessor that allows you to write cleaner and more manageable CSS. This file contains your SASS codes and creates a CSS file after compilation.


## .js files
I used JavaScript to add dynamic and interactive features to my website. I created an interactive website that responds to user interactions (clicks, mouse movements, keyboard inputs, etc.).

### bootstrap.js
This file contains the JavaScript components of the Bootstrap framework. It enables modals, dropdowns, alerts, and other interactive components to work. It is used in conjunction with the CSS part of Bootstrap.(bootstrap.css)

### custom.js
This file contains JavaScript codes specific to my website. Project-specific functions, event listeners, and other JavaScript codes are defined here.

### jquery-3.4.1.min
jQuery is a popular JavaScript library used to simplify web development processes. The "min" extension indicates that this file is minified (minified). This means that the file is optimized for faster loading. jQuery facilitates DOM manipulation, event handling, animations, and AJAX operations.


## fonts
These files are web fonts from a popular icon set called FontAwesome.

## images
This file contains the images I use on my website.
