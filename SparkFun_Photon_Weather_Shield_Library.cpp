<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta content="width=device-width, initial-scale=1.0" name="viewport">
    <title>
      Particle Web IDE
    </title>
    <meta content="Write and flash code to your Particle devices" name="description">

    <!-- Typography and favicon -->
    <link rel="stylesheet" type="text/css" href="//cloud.typography.com/6107112/665726/css/fonts.css" />
    <link rel="shortcut icon" href="/blue.ico" type="image/x-icon" />

    <link rel="stylesheet" media="all" href="/assets/application-1e940b859762c83a99c7cfd359e305553558609517ae3ccdf1b5aa113a8e93cf.css" />
    <script src="/assets/application-077f77f8b36fbe8c19c73e227015fb9d249fe8825744efadf711c3478b0af5fb.js"></script>
    <meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="GW3gtMVUWT8UvCPLmBoHu6CQ0Zga8yIex3e1o0p+SRusgrhz5BgF+WRs4jH3fw1F92Uf0XG61DZJlLiy6P34eg==" />

  </head>
  <body>
    <script type='text/x-handlebars'>
        {{#if showSidebar}}
          {{ render "sidebar" }}
        {{/if}}

        {{ outlet "modal" }}

        {{ outlet }}
    </script>

    <script type="text/javascript">
      window.emberEnabled = true;
    </script>


    <script src="https://www.promisejs.org/polyfills/promise-6.1.0.js"></script>
    <script type="text/javascript">
      window.api_base_uri="https://api.particle.io";
      window.go_base_uri="https://go.particle.io";
    </script>
    <script type="text/javascript">
    window.buildSegmentWriteKey = "urJpnRlkIKUq4v4FAZOtMb15vZs4F7S8";
    window.blacklistURL = "";
    window.cookieDomain = ".particle.io";
    window.sentryDSN = "https://f3e376a4261d4aa6984b47bbe714e9ad@app.getsentry.com/48999";
    Raven.config(window.sentryDSN).install();
    </script>
  </body>
</html>
