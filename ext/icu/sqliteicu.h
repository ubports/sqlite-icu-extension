





<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
  <link rel="dns-prefetch" href="https://assets-cdn.github.com">
  <link rel="dns-prefetch" href="https://avatars0.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars1.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars2.githubusercontent.com">
  <link rel="dns-prefetch" href="https://avatars3.githubusercontent.com">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">



  <link crossorigin="anonymous" media="all" integrity="sha512-FCg44VGg5ax/5MpZ8otwiPE+/tG1/Sq67mKkl6agbqgoScZtJyXhQSFQMIJfOHMZZ+yXDINb8nEiws60SiLohg==" rel="stylesheet" href="https://assets-cdn.github.com/assets/frameworks-5aa6d9885579bb2359f66266aee26f3b.css" />
  <link crossorigin="anonymous" media="all" integrity="sha512-+/hqp+gOyKak+oOrmncIDqvw8rgk69e9HtwA/O+2PG25IJgS6L+sciem4Dqu4L77m8UaEYWxYhXeRhxzzaDk3Q==" rel="stylesheet" href="https://assets-cdn.github.com/assets/github-2bf9c5ab90af2104656120603fa7ae6a.css" />
  
  
  <link crossorigin="anonymous" media="all" integrity="sha512-vziz6Jjw591pyA52+2EoS07YE63bIc0zkvSG4yIM9edY2ArBBBIwvTw49H8rn4Z+YLbBw5LzBWSFwoZkxQK+0A==" rel="stylesheet" href="https://assets-cdn.github.com/assets/site-3ba3ae12a2f85a6290c97a963107cc97.css" />
  

  <meta name="viewport" content="width=device-width">
  
  <title>sqlite/sqliteicu.h at master · mackyle/sqlite · GitHub</title>
    <meta name="description" content="Unofficial git mirror of SQLite sources (see link for build instructions) - mackyle/sqlite">
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
  <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
  <meta property="fb:app_id" content="1401488693436528">

    
    <meta property="og:image" content="https://avatars2.githubusercontent.com/u/813346?s=400&amp;v=4" /><meta property="og:site_name" content="GitHub" /><meta property="og:type" content="object" /><meta property="og:title" content="mackyle/sqlite" /><meta property="og:url" content="https://github.com/mackyle/sqlite" /><meta property="og:description" content="Unofficial git mirror of SQLite sources (see link for build instructions) - mackyle/sqlite" />

  <link rel="assets" href="https://assets-cdn.github.com/">
  
  <meta name="pjax-timeout" content="1000">
  
  <meta name="request-id" content="9106:1423:E6A066:1C20187:5BC64331" data-pjax-transient>


  

  <meta name="selected-link" value="repo_source" data-pjax-transient>

      <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
    <meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-site-verification" content="GXs5KoUUkNCoaAZn7wPN-t01Pywp9M3sEjnt_3_ZWPc">

  <meta name="octolytics-host" content="collector.githubapp.com" /><meta name="octolytics-app-id" content="github" /><meta name="octolytics-event-url" content="https://collector.githubapp.com/github-external/browser_event" /><meta name="octolytics-dimension-request_id" content="9106:1423:E6A066:1C20187:5BC64331" /><meta name="octolytics-dimension-region_edge" content="iad" /><meta name="octolytics-dimension-region_render" content="iad" />
<meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" />



    <meta name="google-analytics" content="UA-3769691-2">


<meta class="js-ga-set" name="dimension1" content="Logged Out">



  

      <meta name="hostname" content="github.com">
    <meta name="user-login" content="">

      <meta name="expected-hostname" content="github.com">
    <meta name="js-proxy-site-detection-payload" content="YjI2NDk0NTNmNTQ1YmRhZDg3OTQ5ODM5MGM5OTAwMDAwYzEzYWY2ZGEyMTdjNGI4ODU3OGQyYWFkMDBhYWU2MXx7InJlbW90ZV9hZGRyZXNzIjoiMjEzLjIxLjQ0LjEzMiIsInJlcXVlc3RfaWQiOiI5MTA2OjE0MjM6RTZBMDY2OjFDMjAxODc6NUJDNjQzMzEiLCJ0aW1lc3RhbXAiOjE1Mzk3MTk5ODUsImhvc3QiOiJnaXRodWIuY29tIn0=">

    <meta name="enabled-features" content="DASHBOARD_V2_LAYOUT_OPT_IN,EXPLORE_DISCOVER_REPOSITORIES,UNIVERSE_BANNER,MARKETPLACE_PLAN_RESTRICTION_EDITOR,ISSUE_AND_PR_HOVERCARDS">

  <meta name="html-safe-nonce" content="03a99f5f8b8a24094d0e7a4ad060b15ccf6d7aa0">

  <meta http-equiv="x-pjax-version" content="2445a9d8f1e3921e095f7142cee041b8">
  

      <link href="https://github.com/mackyle/sqlite/commits/master.atom" rel="alternate" title="Recent Commits to sqlite:master" type="application/atom+xml">

  <meta name="go-import" content="github.com/mackyle/sqlite git https://github.com/mackyle/sqlite.git">

  <meta name="octolytics-dimension-user_id" content="813346" /><meta name="octolytics-dimension-user_login" content="mackyle" /><meta name="octolytics-dimension-repository_id" content="10400632" /><meta name="octolytics-dimension-repository_nwo" content="mackyle/sqlite" /><meta name="octolytics-dimension-repository_public" content="true" /><meta name="octolytics-dimension-repository_is_fork" content="false" /><meta name="octolytics-dimension-repository_network_root_id" content="10400632" /><meta name="octolytics-dimension-repository_network_root_nwo" content="mackyle/sqlite" /><meta name="octolytics-dimension-repository_explore_github_marketplace_ci_cta_shown" content="false" />


    <link rel="canonical" href="https://github.com/mackyle/sqlite/blob/master/ext/icu/sqliteicu.h" data-pjax-transient>


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#000000">
  <link rel="icon" type="image/x-icon" class="js-site-favicon" href="https://assets-cdn.github.com/favicon.ico">

<meta name="theme-color" content="#1e2327">



  <link rel="manifest" href="/manifest.json" crossOrigin="use-credentials">

  </head>

  <body class="logged-out env-production page-blob">
    

  <div class="position-relative js-header-wrapper ">
    <a href="#start-of-content" tabindex="1" class="px-2 py-4 bg-blue text-white show-on-focus js-skip-to-content">Skip to content</a>
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"><div class="progress"></div></div>

    
    
    



        
<header class="Header header-logged-out  position-relative f4 py-3" role="banner">
  <div class="container-lg d-flex px-3">
    <div class="d-flex flex-justify-between flex-items-center">
      <a class="header-logo-invertocat my-0" href="https://github.com/" aria-label="Homepage" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
        <svg height="32" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="32" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
      </a>

    </div>

    <div class="HeaderMenu d-flex flex-justify-between flex-auto">
        <nav class="mt-0">
          <ul class="d-flex list-style-none">
              <li class="ml-2">
                <a class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:features" data-selected-links="/features /features/project-management /features/code-review /features/project-management /features/integrations /features" href="/features">
                  Features
</a>              </li>
              <li class="ml-4">
                <a class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:business" data-selected-links="/business /business/security /business/customers /business" href="/business">
                  Business
</a>              </li>

              <li class="ml-4">
                <a class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:explore" data-selected-links="/explore /trending /trending/developers /integrations /integrations/feature/code /integrations/feature/collaborate /integrations/feature/ship showcases showcases_search showcases_landing /explore" href="/explore">
                  Explore
</a>              </li>

              <li class="ml-4">
                    <a class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:marketplace" data-selected-links=" /marketplace" href="/marketplace">
                      Marketplace
</a>              </li>
              <li class="ml-4">
                <a class="js-selected-navigation-item HeaderNavlink px-0 py-2 m-0" data-ga-click="Header, click, Nav menu - item:pricing" data-selected-links="/pricing /pricing/developer /pricing/team /pricing/business-hosted /pricing/business-enterprise /pricing" href="/pricing">
                  Pricing
</a>              </li>
          </ul>
        </nav>

      <div class="d-flex">
          <div class="d-lg-flex flex-items-center mr-3">
            <div class="header-search scoped-search site-scoped-search js-site-search position-relative js-jump-to"
  role="combobox"
  aria-owns="jump-to-results"
  aria-label="Search or jump to"
  aria-haspopup="listbox"
  aria-expanded="false"
>
  <div class="position-relative">
    <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-site-search-form" data-scope-type="Repository" data-scope-id="10400632" data-scoped-search-url="/mackyle/sqlite/search" data-unscoped-search-url="/search" action="/mackyle/sqlite/search" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
      <label class="form-control header-search-wrapper header-search-wrapper-jump-to position-relative d-flex flex-justify-between flex-items-center js-chromeless-input-container">
        <input type="text"
          class="form-control header-search-input jump-to-field js-jump-to-field js-site-search-focus js-site-search-field is-clearable"
          data-hotkey="s,/"
          name="q"
          value=""
          placeholder="Search"
          data-unscoped-placeholder="Search GitHub"
          data-scoped-placeholder="Search"
          autocapitalize="off"
          aria-autocomplete="list"
          aria-controls="jump-to-results"
          data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations#csrf-token=PmEFGPKPBPSwt5okrCIIlRbQ8N4CL0ZqE5JeGDjfJEXS2ogcq9teAT7zttHUMq2lr0Z1Oq/JfsAlpfKL7HCO7Q=="
          spellcheck="false"
          autocomplete="off"
          >
          <input type="hidden" class="js-site-search-type-field" name="type" >
            <img src="https://assets-cdn.github.com/images/search-shortcut-hint.svg" alt="" class="mr-2 header-search-key-slash">

            <div class="Box position-absolute overflow-hidden d-none jump-to-suggestions js-jump-to-suggestions-container">
              <ul class="d-none js-jump-to-suggestions-template-container">
                <li class="d-flex flex-justify-start flex-items-center p-0 f5 navigation-item js-navigation-item" role="option">
                  <a tabindex="-1" class="no-underline d-flex flex-auto flex-items-center p-2 jump-to-suggestions-path js-jump-to-suggestion-path js-navigation-open" href="">
                    <div class="jump-to-octicon js-jump-to-octicon flex-shrink-0 mr-2 text-center d-none">
                      <svg height="16" width="16" class="octicon octicon-repo flex-shrink-0 js-jump-to-octicon-repo d-none" title="Repository" aria-label="Repository" viewBox="0 0 12 16" version="1.1" role="img"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
                      <svg height="16" width="16" class="octicon octicon-project flex-shrink-0 js-jump-to-octicon-project d-none" title="Project" aria-label="Project" viewBox="0 0 15 16" version="1.1" role="img"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
                      <svg height="16" width="16" class="octicon octicon-search flex-shrink-0 js-jump-to-octicon-search d-none" title="Search" aria-label="Search" viewBox="0 0 16 16" version="1.1" role="img"><path fill-rule="evenodd" d="M15.7 13.3l-3.81-3.83A5.93 5.93 0 0 0 13 6c0-3.31-2.69-6-6-6S1 2.69 1 6s2.69 6 6 6c1.3 0 2.48-.41 3.47-1.11l3.83 3.81c.19.2.45.3.7.3.25 0 .52-.09.7-.3a.996.996 0 0 0 0-1.41v.01zM7 10.7c-2.59 0-4.7-2.11-4.7-4.7 0-2.59 2.11-4.7 4.7-4.7 2.59 0 4.7 2.11 4.7 4.7 0 2.59-2.11 4.7-4.7 4.7z"/></svg>
                    </div>

                    <img class="avatar mr-2 flex-shrink-0 js-jump-to-suggestion-avatar d-none" alt="" aria-label="Team" src="" width="28" height="28">

                    <div class="jump-to-suggestion-name js-jump-to-suggestion-name flex-auto overflow-hidden text-left no-wrap css-truncate css-truncate-target">
                    </div>

                    <div class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none js-jump-to-badge-search">
                      <span class="js-jump-to-badge-search-text-default d-none" aria-label="in this repository">
                        In this repository
                      </span>
                      <span class="js-jump-to-badge-search-text-global d-none" aria-label="in all of GitHub">
                        All GitHub
                      </span>
                      <span aria-hidden="true" class="d-inline-block ml-1 v-align-middle">↵</span>
                    </div>

                    <div aria-hidden="true" class="border rounded-1 flex-shrink-0 bg-gray px-1 text-gray-light ml-1 f6 d-none d-on-nav-focus js-jump-to-badge-jump">
                      Jump to
                      <span class="d-inline-block ml-1 v-align-middle">↵</span>
                    </div>
                  </a>
                </li>
              </ul>
              <ul class="d-none js-jump-to-no-results-template-container">
                <li class="d-flex flex-justify-center flex-items-center p-3 f5 d-none">
                  <span class="text-gray">No suggested jump to results</span>
                </li>
              </ul>

              <ul id="jump-to-results" role="listbox" class="js-navigation-container jump-to-suggestions-results-container js-jump-to-suggestions-results-container" >
                <li class="d-flex flex-justify-center flex-items-center p-0 f5">
                  <img src="https://assets-cdn.github.com/images/spinners/octocat-spinner-128.gif" alt="Octocat Spinner Icon" class="m-2" width="28">
                </li>
              </ul>
            </div>
      </label>
</form>  </div>
</div>

          </div>

        <span class="d-inline-block">
            <div class="HeaderNavlink px-0 py-2 m-0">
              <a class="text-bold text-white no-underline" href="/login?return_to=%2Fmackyle%2Fsqlite%2Fblob%2Fmaster%2Fext%2Ficu%2Fsqliteicu.h" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
                <span class="text-gray">or</span>
                <a class="text-bold text-white no-underline" href="/join?source=header-repo" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
            </div>
        </span>
      </div>
    </div>
  </div>
</header>

  </div>

  <div id="start-of-content" class="show-on-focus"></div>

    <div id="js-flash-container">


</div>



  <div role="main" class="application-main ">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode" class="">
    <div id="js-repo-pjax-container" data-pjax-container >
      







  <div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav  ">
    <div class="repohead-details-container clearfix container">

      <ul class="pagehead-actions">
  <li>
      <a href="/login?return_to=%2Fmackyle%2Fsqlite"
    class="btn btn-sm btn-with-count tooltipped tooltipped-s"
    aria-label="You must be signed in to watch a repository" rel="nofollow">
    <svg class="octicon octicon-eye v-align-text-bottom" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"/></svg>
    Watch
  </a>
  <a class="social-count" href="/mackyle/sqlite/watchers"
     aria-label="72 users are watching this repository">
    72
  </a>

  </li>

  <li>
      <a href="/login?return_to=%2Fmackyle%2Fsqlite"
    class="btn btn-sm btn-with-count tooltipped tooltipped-s"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <svg class="octicon octicon-star v-align-text-bottom" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74L14 6z"/></svg>
    Star
  </a>

    <a class="social-count js-social-count" href="/mackyle/sqlite/stargazers"
      aria-label="1021 users starred this repository">
      1,021
    </a>

  </li>

  <li>
      <a href="/login?return_to=%2Fmackyle%2Fsqlite"
        class="btn btn-sm btn-with-count tooltipped tooltipped-s"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <svg class="octicon octicon-repo-forked v-align-text-bottom" viewBox="0 0 10 16" version="1.1" width="10" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
        Fork
      </a>

    <a href="/mackyle/sqlite/network/members" class="social-count"
       aria-label="334 users forked this repository">
      334
    </a>
  </li>
</ul>

      <h1 class="public ">
  <svg class="octicon octicon-repo" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9H3V8h1v1zm0-3H3v1h1V6zm0-2H3v1h1V4zm0-2H3v1h1V2zm8-1v12c0 .55-.45 1-1 1H6v2l-1.5-1.5L3 16v-2H1c-.55 0-1-.45-1-1V1c0-.55.45-1 1-1h10c.55 0 1 .45 1 1zm-1 10H1v2h2v-1h3v1h5v-2zm0-10H2v9h9V1z"/></svg>
  <span class="author" itemprop="author"><a class="url fn" rel="author" href="/mackyle">mackyle</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a data-pjax="#js-repo-pjax-container" href="/mackyle/sqlite">sqlite</a></strong>

</h1>

    </div>
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax container"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a class="js-selected-navigation-item selected reponav-item" itemprop="url" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages /mackyle/sqlite" href="/mackyle/sqlite">
      <svg class="octicon octicon-code" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"/></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>


  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a data-hotkey="g p" itemprop="url" class="js-selected-navigation-item reponav-item" data-selected-links="repo_pulls checks /mackyle/sqlite/pulls" href="/mackyle/sqlite/pulls">
      <svg class="octicon octicon-git-pull-request" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"/></svg>
      <span itemprop="name">Pull requests</span>
      <span class="Counter">1</span>
      <meta itemprop="position" content="3">
</a>  </span>


    <a data-hotkey="g b" class="js-selected-navigation-item reponav-item" data-selected-links="repo_projects new_repo_project repo_project /mackyle/sqlite/projects" href="/mackyle/sqlite/projects">
      <svg class="octicon octicon-project" viewBox="0 0 15 16" version="1.1" width="15" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M10 12h3V2h-3v10zm-4-2h3V2H6v8zm-4 4h3V2H2v12zm-1 1h13V1H1v14zM14 0H1a1 1 0 0 0-1 1v14a1 1 0 0 0 1 1h13a1 1 0 0 0 1-1V1a1 1 0 0 0-1-1z"/></svg>
      Projects
      <span class="Counter" >0</span>
</a>


  <a class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors dependency_graph pulse alerts /mackyle/sqlite/pulse" href="/mackyle/sqlite/pulse">
    <svg class="octicon octicon-graph" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"/></svg>
    Insights
</a>

</nav>


  </div>

<div class="container new-discussion-timeline experiment-repo-nav  ">
  <div class="repository-content ">

    

  
    <a class="d-none js-permalink-shortcut" data-hotkey="y" href="/mackyle/sqlite/blob/841904a56a8d5f9e19873d30604fcdd1f4059c4a/ext/icu/sqliteicu.h">Permalink</a>

    <!-- blob contrib key: blob_contributors:v21:b16aa91e4f6ee9cf29412a2d195d05ea -->

        <div class="signup-prompt-bg rounded-1">
      <div class="signup-prompt p-4 text-center mb-4 rounded-1">
        <div class="position-relative">
          <!-- '"` --><!-- </textarea></xmp> --></option></form><form action="/site/dismiss_signup_prompt" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="authenticity_token" value="/RF6vonXOjKYT5Rn0tNVXtikaXe8HYqpOeUEK+MndqM+IzdpI3PQ6R3lL2qqRUFcGyNAXUPB37t+8/PzLWiYPw==" />
            <button type="submit" class="position-absolute top-0 right-0 btn-link link-gray" data-ga-click="(Logged out) Sign up prompt, clicked Dismiss, text:dismiss">
              Dismiss
            </button>
</form>          <h3 class="pt-2">Join GitHub today</h3>
          <p class="col-6 mx-auto">GitHub is home to over 28 million developers working together to host and review code, manage projects, and build software together.</p>
          <a class="btn btn-primary" href="/join?source=prompt-blob-show" data-ga-click="(Logged out) Sign up prompt, clicked Sign up, text:sign-up">Sign up</a>
        </div>
      </div>
    </div>


    <div class="file-navigation">
      
<div class="select-menu branch-select-menu js-menu-container js-select-menu float-left">
  <button class=" btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    
    type="button" aria-label="Switch branches or tags" aria-expanded="false" aria-haspopup="true">
      <i>Branch:</i>
      <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg class="octicon octicon-x js-menu-close" role="img" aria-label="Close" viewBox="0 0 12 16" version="1.1" width="12" height="16"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/3-digit-multiplex-suffix/ext/icu/sqliteicu.h"
               data-name="3-digit-multiplex-suffix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                3-digit-multiplex-suffix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/3.18/ext/icu/sqliteicu.h"
               data-name="3.18"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                3.18
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/64-bit-lengths/ext/icu/sqliteicu.h"
               data-name="64-bit-lengths"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                64-bit-lengths
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/Cplusplus-comment/ext/icu/sqliteicu.h"
               data-name="Cplusplus-comment"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                Cplusplus-comment
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/EQP-improvements/ext/icu/sqliteicu.h"
               data-name="EQP-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                EQP-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/IN-operator-improvements/ext/icu/sqliteicu.h"
               data-name="IN-operator-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                IN-operator-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/IN-with-ORDERBY/ext/icu/sqliteicu.h"
               data-name="IN-with-ORDERBY"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                IN-with-ORDERBY
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/OP_Column-refactor/ext/icu/sqliteicu.h"
               data-name="OP_Column-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                OP_Column-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/OP_SorterColumns/ext/icu/sqliteicu.h"
               data-name="OP_SorterColumns"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                OP_SorterColumns
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/OR-clause-improvement/ext/icu/sqliteicu.h"
               data-name="OR-clause-improvement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                OR-clause-improvement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/VList/ext/icu/sqliteicu.h"
               data-name="VList"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                VList
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/abandoned/ext/icu/sqliteicu.h"
               data-name="abandoned"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                abandoned
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/affinity-func/ext/icu/sqliteicu.h"
               data-name="affinity-func"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                affinity-func
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/affinity-sql-func/ext/icu/sqliteicu.h"
               data-name="affinity-sql-func"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                affinity-sql-func
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/align8-fix/ext/icu/sqliteicu.h"
               data-name="align8-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                align8-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/alt1-tkt-f97c4637/ext/icu/sqliteicu.h"
               data-name="alt1-tkt-f97c4637"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                alt1-tkt-f97c4637
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/altShellFix/ext/icu/sqliteicu.h"
               data-name="altShellFix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                altShellFix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/alter-auth-callbacks/ext/icu/sqliteicu.h"
               data-name="alter-auth-callbacks"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                alter-auth-callbacks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/alter-table-rename-column/ext/icu/sqliteicu.h"
               data-name="alter-table-rename-column"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                alter-table-rename-column
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/alter-table-rename-table/ext/icu/sqliteicu.h"
               data-name="alter-table-rename-table"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                alter-table-rename-table
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/amalg-json1-fts5/ext/icu/sqliteicu.h"
               data-name="amalg-json1-fts5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                amalg-json1-fts5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/analyze-empty-tables/ext/icu/sqliteicu.h"
               data-name="analyze-empty-tables"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                analyze-empty-tables
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/analyze-idx/ext/icu/sqliteicu.h"
               data-name="analyze-idx"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                analyze-idx
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/analyze-worst-case/ext/icu/sqliteicu.h"
               data-name="analyze-worst-case"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                analyze-worst-case
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/android-large-filles/ext/icu/sqliteicu.h"
               data-name="android-large-filles"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                android-large-filles
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/api-armor/ext/icu/sqliteicu.h"
               data-name="api-armor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                api-armor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/appendvfs/ext/icu/sqliteicu.h"
               data-name="appendvfs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                appendvfs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-increased-sorting-cost/ext/icu/sqliteicu.h"
               data-name="apple-increased-sorting-cost"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-increased-sorting-cost
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-osx-377/ext/icu/sqliteicu.h"
               data-name="apple-osx-377"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-osx-377
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-osx-385/ext/icu/sqliteicu.h"
               data-name="apple-osx-385"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-osx-385
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-osx-3623/ext/icu/sqliteicu.h"
               data-name="apple-osx-3623"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-osx-3623
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-osx-exp/ext/icu/sqliteicu.h"
               data-name="apple-osx-exp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-osx-exp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-osx-ml/ext/icu/sqliteicu.h"
               data-name="apple-osx-ml"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-osx-ml
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-osx/ext/icu/sqliteicu.h"
               data-name="apple-osx"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-osx
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/apple-wal-readonly/ext/icu/sqliteicu.h"
               data-name="apple-wal-readonly"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                apple-wal-readonly
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/application-id/ext/icu/sqliteicu.h"
               data-name="application-id"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                application-id
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/archive-improvements/ext/icu/sqliteicu.h"
               data-name="archive-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                archive-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/asciiMode/ext/icu/sqliteicu.h"
               data-name="asciiMode"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                asciiMode
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ast-trace-demo/ext/icu/sqliteicu.h"
               data-name="ast-trace-demo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ast-trace-demo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/attach-in-trans/ext/icu/sqliteicu.h"
               data-name="attach-in-trans"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                attach-in-trans
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/auto-analyze/ext/icu/sqliteicu.h"
               data-name="auto-analyze"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                auto-analyze
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/auto-explain/ext/icu/sqliteicu.h"
               data-name="auto-explain"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                auto-explain
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/autoconf-package/ext/icu/sqliteicu.h"
               data-name="autoconf-package"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                autoconf-package
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/autoinc-enhancement/ext/icu/sqliteicu.h"
               data-name="autoinc-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                autoinc-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/autoindex-improvements/ext/icu/sqliteicu.h"
               data-name="autoindex-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                autoindex-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/autoindex-planning/ext/icu/sqliteicu.h"
               data-name="autoindex-planning"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                autoindex-planning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/automatic-index-affinity/ext/icu/sqliteicu.h"
               data-name="automatic-index-affinity"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                automatic-index-affinity
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/aux-data-in-rtree/ext/icu/sqliteicu.h"
               data-name="aux-data-in-rtree"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                aux-data-in-rtree
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/auxdata-cache/ext/icu/sqliteicu.h"
               data-name="auxdata-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                auxdata-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/av-defense/ext/icu/sqliteicu.h"
               data-name="av-defense"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                av-defense
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/avoid-buffer-overread/ext/icu/sqliteicu.h"
               data-name="avoid-buffer-overread"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                avoid-buffer-overread
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/avoid-fallocate/ext/icu/sqliteicu.h"
               data-name="avoid-fallocate"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                avoid-fallocate
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/avoid-unusable-match/ext/icu/sqliteicu.h"
               data-name="avoid-unusable-match"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                avoid-unusable-match
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/batch-atomic-write-3.19/ext/icu/sqliteicu.h"
               data-name="batch-atomic-write-3.19"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                batch-atomic-write-3.19
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/batch-atomic-write/ext/icu/sqliteicu.h"
               data-name="batch-atomic-write"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                batch-atomic-write
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/begin-concurrent-branch-3.19/ext/icu/sqliteicu.h"
               data-name="begin-concurrent-branch-3.19"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                begin-concurrent-branch-3.19
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/begin-concurrent-pnu-tempfix/ext/icu/sqliteicu.h"
               data-name="begin-concurrent-pnu-tempfix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                begin-concurrent-pnu-tempfix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/begin-concurrent-pnu/ext/icu/sqliteicu.h"
               data-name="begin-concurrent-pnu"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                begin-concurrent-pnu
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/begin-concurrent/ext/icu/sqliteicu.h"
               data-name="begin-concurrent"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                begin-concurrent
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/better-distinct-agg/ext/icu/sqliteicu.h"
               data-name="better-distinct-agg"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                better-distinct-agg
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/bind-pointer/ext/icu/sqliteicu.h"
               data-name="bind-pointer"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                bind-pointer
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/blob-affinity-rename/ext/icu/sqliteicu.h"
               data-name="blob-affinity-rename"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                blob-affinity-rename
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/blob_reopen-fix/ext/icu/sqliteicu.h"
               data-name="blob_reopen-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                blob_reopen-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/blocking-checkpoint/ext/icu/sqliteicu.h"
               data-name="blocking-checkpoint"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                blocking-checkpoint
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/box-character-graph/ext/icu/sqliteicu.h"
               data-name="box-character-graph"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                box-character-graph
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.3.6/ext/icu/sqliteicu.h"
               data-name="branch-3.3.6"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.3.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.5.9/ext/icu/sqliteicu.h"
               data-name="branch-3.5.9"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.5.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.6.1-exp/ext/icu/sqliteicu.h"
               data-name="branch-3.6.1-exp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.6.1-exp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.6.1/ext/icu/sqliteicu.h"
               data-name="branch-3.6.1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.6.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.6.21/ext/icu/sqliteicu.h"
               data-name="branch-3.6.21"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.6.21
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.6.22/ext/icu/sqliteicu.h"
               data-name="branch-3.6.22"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.6.22
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.6.23/ext/icu/sqliteicu.h"
               data-name="branch-3.6.23"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.6.23
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.0/ext/icu/sqliteicu.h"
               data-name="branch-3.7.0"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.2/ext/icu/sqliteicu.h"
               data-name="branch-3.7.2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.4/ext/icu/sqliteicu.h"
               data-name="branch-3.7.4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.5/ext/icu/sqliteicu.h"
               data-name="branch-3.7.5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.6/ext/icu/sqliteicu.h"
               data-name="branch-3.7.6"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.7/ext/icu/sqliteicu.h"
               data-name="branch-3.7.7"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.9/ext/icu/sqliteicu.h"
               data-name="branch-3.7.9"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.11/ext/icu/sqliteicu.h"
               data-name="branch-3.7.11"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.14/ext/icu/sqliteicu.h"
               data-name="branch-3.7.14"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.15/ext/icu/sqliteicu.h"
               data-name="branch-3.7.15"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.15
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.7.16/ext/icu/sqliteicu.h"
               data-name="branch-3.7.16"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.7.16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.0/ext/icu/sqliteicu.h"
               data-name="branch-3.8.0"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.2/ext/icu/sqliteicu.h"
               data-name="branch-3.8.2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.3/ext/icu/sqliteicu.h"
               data-name="branch-3.8.3"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.4/ext/icu/sqliteicu.h"
               data-name="branch-3.8.4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.6/ext/icu/sqliteicu.h"
               data-name="branch-3.8.6"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.7/ext/icu/sqliteicu.h"
               data-name="branch-3.8.7"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.8/ext/icu/sqliteicu.h"
               data-name="branch-3.8.8"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.9/ext/icu/sqliteicu.h"
               data-name="branch-3.8.9"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.10/ext/icu/sqliteicu.h"
               data-name="branch-3.8.10"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.8.11/ext/icu/sqliteicu.h"
               data-name="branch-3.8.11"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.8.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.9/ext/icu/sqliteicu.h"
               data-name="branch-3.9"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.9.2/ext/icu/sqliteicu.h"
               data-name="branch-3.9.2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.9.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.10/ext/icu/sqliteicu.h"
               data-name="branch-3.10"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.11-matchinfo/ext/icu/sqliteicu.h"
               data-name="branch-3.11-matchinfo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.11-matchinfo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.11/ext/icu/sqliteicu.h"
               data-name="branch-3.11"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.12.0/ext/icu/sqliteicu.h"
               data-name="branch-3.12.0"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.12.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.14/ext/icu/sqliteicu.h"
               data-name="branch-3.14"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.15/ext/icu/sqliteicu.h"
               data-name="branch-3.15"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.15
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.16/ext/icu/sqliteicu.h"
               data-name="branch-3.16"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.17/ext/icu/sqliteicu.h"
               data-name="branch-3.17"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.17
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.18/ext/icu/sqliteicu.h"
               data-name="branch-3.18"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.18
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.19/ext/icu/sqliteicu.h"
               data-name="branch-3.19"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.19
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.20/ext/icu/sqliteicu.h"
               data-name="branch-3.20"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.20
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.21/ext/icu/sqliteicu.h"
               data-name="branch-3.21"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.21
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.22/ext/icu/sqliteicu.h"
               data-name="branch-3.22"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.22
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.23/ext/icu/sqliteicu.h"
               data-name="branch-3.23"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.23
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch-3.25/ext/icu/sqliteicu.h"
               data-name="branch-3.25"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch-3.25
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch_3_2/ext/icu/sqliteicu.h"
               data-name="branch_3_2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch_3_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch_3_3_13/ext/icu/sqliteicu.h"
               data-name="branch_3_3_13"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch_3_3_13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch_3_3_17/ext/icu/sqliteicu.h"
               data-name="branch_3_3_17"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch_3_3_17
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch_3_6_6/ext/icu/sqliteicu.h"
               data-name="branch_3_6_6"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch_3_6_6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch_3_6_14/ext/icu/sqliteicu.h"
               data-name="branch_3_6_14"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch_3_6_14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/branch_3_6_16/ext/icu/sqliteicu.h"
               data-name="branch_3_6_16"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                branch_3_6_16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/broken-build/ext/icu/sqliteicu.h"
               data-name="broken-build"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                broken-build
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/broken-on-arm/ext/icu/sqliteicu.h"
               data-name="broken-on-arm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                broken-on-arm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/bswap-functions/ext/icu/sqliteicu.h"
               data-name="bswap-functions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                bswap-functions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-balance-bias/ext/icu/sqliteicu.h"
               data-name="btree-balance-bias"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-balance-bias
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-column-opcode/ext/icu/sqliteicu.h"
               data-name="btree-column-opcode"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-column-opcode
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-current-page-cache/ext/icu/sqliteicu.h"
               data-name="btree-current-page-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-current-page-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-debug/ext/icu/sqliteicu.h"
               data-name="btree-debug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-debug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-fordelete-flag/ext/icu/sqliteicu.h"
               data-name="btree-fordelete-flag"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-fordelete-flag
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-moveto-neighbor/ext/icu/sqliteicu.h"
               data-name="btree-moveto-neighbor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-moveto-neighbor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-opt/ext/icu/sqliteicu.h"
               data-name="btree-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-opt2/ext/icu/sqliteicu.h"
               data-name="btree-opt2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-opt2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-optimization/ext/icu/sqliteicu.h"
               data-name="btree-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-refactor/ext/icu/sqliteicu.h"
               data-name="btree-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-speedup/ext/icu/sqliteicu.h"
               data-name="btree-speedup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-speedup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/btree-tuning/ext/icu/sqliteicu.h"
               data-name="btree-tuning"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                btree-tuning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/bug-5d863f87/ext/icu/sqliteicu.h"
               data-name="bug-5d863f87"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                bug-5d863f87
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/bug-b351d95f9c/ext/icu/sqliteicu.h"
               data-name="bug-b351d95f9c"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                bug-b351d95f9c
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/buggy-lemon/ext/icu/sqliteicu.h"
               data-name="buggy-lemon"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                buggy-lemon
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/builtin-bswap64/ext/icu/sqliteicu.h"
               data-name="builtin-bswap64"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                builtin-bswap64
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/busy-timeout-pragma/ext/icu/sqliteicu.h"
               data-name="busy-timeout-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                busy-timeout-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cache-stats/ext/icu/sqliteicu.h"
               data-name="cache-stats"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cache-stats
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cache_spill%3DN/ext/icu/sqliteicu.h"
               data-name="cache_spill=N"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cache_spill=N
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cache_spill/ext/icu/sqliteicu.h"
               data-name="cache_spill"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cache_spill
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cacheflush/ext/icu/sqliteicu.h"
               data-name="cacheflush"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cacheflush
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/callbackConv/ext/icu/sqliteicu.h"
               data-name="callbackConv"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                callbackConv
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/calloc/ext/icu/sqliteicu.h"
               data-name="calloc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                calloc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/carray_asc/ext/icu/sqliteicu.h"
               data-name="carray_asc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                carray_asc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cell-overwrite-prototype/ext/icu/sqliteicu.h"
               data-name="cell-overwrite-prototype"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cell-overwrite-prototype
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cell-size-check-pragma/ext/icu/sqliteicu.h"
               data-name="cell-size-check-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cell-size-check-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/changebatch/ext/icu/sqliteicu.h"
               data-name="changebatch"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                changebatch
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/checkindex/ext/icu/sqliteicu.h"
               data-name="checkindex"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                checkindex
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/checkpoint-truncate/ext/icu/sqliteicu.h"
               data-name="checkpoint-truncate"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                checkpoint-truncate
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/clear-subtype-fail/ext/icu/sqliteicu.h"
               data-name="clear-subtype-fail"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                clear-subtype-fail
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/clear-subtype-flag/ext/icu/sqliteicu.h"
               data-name="clear-subtype-flag"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                clear-subtype-flag
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cli-char-width/ext/icu/sqliteicu.h"
               data-name="cli-char-width"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cli-char-width
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/codecless-inmemory-subjournal/ext/icu/sqliteicu.h"
               data-name="codecless-inmemory-subjournal"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                codecless-inmemory-subjournal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/collseq-checking/ext/icu/sqliteicu.h"
               data-name="collseq-checking"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                collseq-checking
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/column-cache-debug/ext/icu/sqliteicu.h"
               data-name="column-cache-debug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                column-cache-debug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/column-usage-hint/ext/icu/sqliteicu.h"
               data-name="column-usage-hint"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                column-usage-hint
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/combine-disjuncts/ext/icu/sqliteicu.h"
               data-name="combine-disjuncts"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                combine-disjuncts
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/common-table-expr/ext/icu/sqliteicu.h"
               data-name="common-table-expr"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                common-table-expr
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/compile_opts/ext/icu/sqliteicu.h"
               data-name="compile_opts"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                compile_opts
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/compiler-compat/ext/icu/sqliteicu.h"
               data-name="compiler-compat"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                compiler-compat
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/compound-order-by-fix/ext/icu/sqliteicu.h"
               data-name="compound-order-by-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                compound-order-by-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/configReadOnly/ext/icu/sqliteicu.h"
               data-name="configReadOnly"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                configReadOnly
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/connect-by/ext/icu/sqliteicu.h"
               data-name="connect-by"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                connect-by
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/constant-refactoring-in-triggers/ext/icu/sqliteicu.h"
               data-name="constant-refactoring-in-triggers"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                constant-refactoring-in-triggers
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/constraint-error-codes/ext/icu/sqliteicu.h"
               data-name="constraint-error-codes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                constraint-error-codes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/coroutine-autoindex/ext/icu/sqliteicu.h"
               data-name="coroutine-autoindex"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                coroutine-autoindex
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/coroutine-refactor/ext/icu/sqliteicu.h"
               data-name="coroutine-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                coroutine-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/corrupt-schema/ext/icu/sqliteicu.h"
               data-name="corrupt-schema"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                corrupt-schema
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/covering-index-on-expr/ext/icu/sqliteicu.h"
               data-name="covering-index-on-expr"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                covering-index-on-expr
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/covering-index/ext/icu/sqliteicu.h"
               data-name="covering-index"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                covering-index
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/covering-or/ext/icu/sqliteicu.h"
               data-name="covering-or"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                covering-or
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/create-table-as-type-fix/ext/icu/sqliteicu.h"
               data-name="create-table-as-type-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                create-table-as-type-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/csv_ext/ext/icu/sqliteicu.h"
               data-name="csv_ext"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                csv_ext
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cte-via-queue/ext/icu/sqliteicu.h"
               data-name="cte-via-queue"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cte-via-queue
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ctime-refactor/ext/icu/sqliteicu.h"
               data-name="ctime-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ctime-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ctimeCompiler/ext/icu/sqliteicu.h"
               data-name="ctimeCompiler"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ctimeCompiler
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cumulative-progress-count/ext/icu/sqliteicu.h"
               data-name="cumulative-progress-count"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cumulative-progress-count
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cursor-hints-displayP4/ext/icu/sqliteicu.h"
               data-name="cursor-hints-displayP4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cursor-hints-displayP4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cursor-hints/ext/icu/sqliteicu.h"
               data-name="cursor-hints"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cursor-hints
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cygDirSep/ext/icu/sqliteicu.h"
               data-name="cygDirSep"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cygDirSep
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cygDlOpen/ext/icu/sqliteicu.h"
               data-name="cygDlOpen"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cygDlOpen
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cygUtf8/ext/icu/sqliteicu.h"
               data-name="cygUtf8"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cygUtf8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/cygwinTempPath/ext/icu/sqliteicu.h"
               data-name="cygwinTempPath"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                cygwinTempPath
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/data_version_pragma/ext/icu/sqliteicu.h"
               data-name="data_version_pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                data_version_pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/date-overflow-fix/ext/icu/sqliteicu.h"
               data-name="date-overflow-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                date-overflow-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/db-readonly-api/ext/icu/sqliteicu.h"
               data-name="db-readonly-api"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                db-readonly-api
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbconfig-prepare-flags/ext/icu/sqliteicu.h"
               data-name="dbconfig-prepare-flags"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbconfig-prepare-flags
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbconfig_maindbname/ext/icu/sqliteicu.h"
               data-name="dbconfig_maindbname"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbconfig_maindbname
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbdump/ext/icu/sqliteicu.h"
               data-name="dbdump"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbdump
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbgTestFixture/ext/icu/sqliteicu.h"
               data-name="dbgTestFixture"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbgTestFixture
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbhash/ext/icu/sqliteicu.h"
               data-name="dbhash"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbhash
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbpage/ext/icu/sqliteicu.h"
               data-name="dbpage"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbpage
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbstat-in-amalgamation/ext/icu/sqliteicu.h"
               data-name="dbstat-in-amalgamation"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbstat-in-amalgamation
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbstatus-cache-spill/ext/icu/sqliteicu.h"
               data-name="dbstatus-cache-spill"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbstatus-cache-spill
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dbstatus-prop-cache-used/ext/icu/sqliteicu.h"
               data-name="dbstatus-prop-cache-used"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dbstatus-prop-cache-used
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dead-end/ext/icu/sqliteicu.h"
               data-name="dead-end"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dead-end
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/deadend/ext/icu/sqliteicu.h"
               data-name="deadend"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                deadend
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/debug-loopcounters/ext/icu/sqliteicu.h"
               data-name="debug-loopcounters"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                debug-loopcounters
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/debug/ext/icu/sqliteicu.h"
               data-name="debug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                debug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/default-synchronous-fix/ext/icu/sqliteicu.h"
               data-name="default-synchronous-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                default-synchronous-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/default-synchronous/ext/icu/sqliteicu.h"
               data-name="default-synchronous"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                default-synchronous
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/defer-where-subqueries/ext/icu/sqliteicu.h"
               data-name="defer-where-subqueries"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                defer-where-subqueries
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/deferred-close-order/ext/icu/sqliteicu.h"
               data-name="deferred-close-order"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                deferred-close-order
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/deferred-close/ext/icu/sqliteicu.h"
               data-name="deferred-close"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                deferred-close
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/deferred-fk-quirk/ext/icu/sqliteicu.h"
               data-name="deferred-fk-quirk"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                deferred-fk-quirk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/deferred-open/ext/icu/sqliteicu.h"
               data-name="deferred-open"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                deferred-open
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/defrag-opt/ext/icu/sqliteicu.h"
               data-name="defrag-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                defrag-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/defragmentpage-opt/ext/icu/sqliteicu.h"
               data-name="defragmentpage-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                defragmentpage-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/degenerate_IN/ext/icu/sqliteicu.h"
               data-name="degenerate_IN"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                degenerate_IN
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/delete-without-rowid-opt/ext/icu/sqliteicu.h"
               data-name="delete-without-rowid-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                delete-without-rowid-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/desc-orderby-fix-1/ext/icu/sqliteicu.h"
               data-name="desc-orderby-fix-1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                desc-orderby-fix-1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/detect-moved-db/ext/icu/sqliteicu.h"
               data-name="detect-moved-db"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                detect-moved-db
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dev/ext/icu/sqliteicu.h"
               data-name="dev"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dev
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/disable-restrict/ext/icu/sqliteicu.h"
               data-name="disable-restrict"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                disable-restrict
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/disable-vtab/ext/icu/sqliteicu.h"
               data-name="disable-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                disable-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/disposable-vtable/ext/icu/sqliteicu.h"
               data-name="disposable-vtable"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                disposable-vtable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/distinct-early-out/ext/icu/sqliteicu.h"
               data-name="distinct-early-out"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                distinct-early-out
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dll-build-fix/ext/icu/sqliteicu.h"
               data-name="dll-build-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dll-build-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/doc-type/ext/icu/sqliteicu.h"
               data-name="doc-type"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                doc-type
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/docTypo/ext/icu/sqliteicu.h"
               data-name="docTypo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                docTypo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/does-not-work/ext/icu/sqliteicu.h"
               data-name="does-not-work"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                does-not-work
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/drop-win9x-support/ext/icu/sqliteicu.h"
               data-name="drop-win9x-support"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                drop-win9x-support
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dropViewNoStat/ext/icu/sqliteicu.h"
               data-name="dropViewNoStat"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dropViewNoStat
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/dump-recovery/ext/icu/sqliteicu.h"
               data-name="dump-recovery"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                dump-recovery
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/early-column-names/ext/icu/sqliteicu.h"
               data-name="early-column-names"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                early-column-names
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/early-vector-size-check/ext/icu/sqliteicu.h"
               data-name="early-vector-size-check"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                early-vector-size-check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/edit-trigger-wrapper/ext/icu/sqliteicu.h"
               data-name="edit-trigger-wrapper"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                edit-trigger-wrapper
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/einval-from-fallocate/ext/icu/sqliteicu.h"
               data-name="einval-from-fallocate"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                einval-from-fallocate
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/enable-QPSG/ext/icu/sqliteicu.h"
               data-name="enable-QPSG"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                enable-QPSG
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/enhanced-mem-check/ext/icu/sqliteicu.h"
               data-name="enhanced-mem-check"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                enhanced-mem-check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/errCodes/ext/icu/sqliteicu.h"
               data-name="errCodes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                errCodes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/est-count-pragma-vtab/ext/icu/sqliteicu.h"
               data-name="est-count-pragma-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                est-count-pragma-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/est_count_pragma/ext/icu/sqliteicu.h"
               data-name="est_count_pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                est_count_pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ex-robust-open/ext/icu/sqliteicu.h"
               data-name="ex-robust-open"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ex-robust-open
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/excel-shell-cmd/ext/icu/sqliteicu.h"
               data-name="excel-shell-cmd"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                excel-shell-cmd
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-agg-opt/ext/icu/sqliteicu.h"
               data-name="exp-agg-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-agg-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-avoid-expensive-skipscan/ext/icu/sqliteicu.h"
               data-name="exp-avoid-expensive-skipscan"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-avoid-expensive-skipscan
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-begin-concurrent-pnu/ext/icu/sqliteicu.h"
               data-name="exp-begin-concurrent-pnu"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-begin-concurrent-pnu
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-busy-snapshot-fix/ext/icu/sqliteicu.h"
               data-name="exp-busy-snapshot-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-busy-snapshot-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-dbreset-fix/ext/icu/sqliteicu.h"
               data-name="exp-dbreset-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-dbreset-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-indexed-clause/ext/icu/sqliteicu.h"
               data-name="exp-indexed-clause"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-indexed-clause
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-retry-atomic-commit/ext/icu/sqliteicu.h"
               data-name="exp-retry-atomic-commit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-retry-atomic-commit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-snapshot-open/ext/icu/sqliteicu.h"
               data-name="exp-snapshot-open"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-snapshot-open
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/exp-window-functions/ext/icu/sqliteicu.h"
               data-name="exp-window-functions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                exp-window-functions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/expShell/ext/icu/sqliteicu.h"
               data-name="expShell"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                expShell
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental-autoindex-fix/ext/icu/sqliteicu.h"
               data-name="experimental-autoindex-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental-autoindex-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental-costs/ext/icu/sqliteicu.h"
               data-name="experimental-costs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental-costs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental-fk-actions/ext/icu/sqliteicu.h"
               data-name="experimental-fk-actions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental-fk-actions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental-mmap/ext/icu/sqliteicu.h"
               data-name="experimental-mmap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental-mmap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental-namelist/ext/icu/sqliteicu.h"
               data-name="experimental-namelist"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental-namelist
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental-pcache/ext/icu/sqliteicu.h"
               data-name="experimental-pcache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental-pcache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimental/ext/icu/sqliteicu.h"
               data-name="experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/experimentalIoLog/ext/icu/sqliteicu.h"
               data-name="experimentalIoLog"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                experimentalIoLog
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/expert-in-shell/ext/icu/sqliteicu.h"
               data-name="expert-in-shell"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                expert-in-shell
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/expr-codegen-enhancement/ext/icu/sqliteicu.h"
               data-name="expr-codegen-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                expr-codegen-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/expr-simplify-branch1/ext/icu/sqliteicu.h"
               data-name="expr-simplify-branch1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                expr-simplify-branch1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/expr-simplify/ext/icu/sqliteicu.h"
               data-name="expr-simplify"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                expr-simplify
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/expr-tuning/ext/icu/sqliteicu.h"
               data-name="expr-tuning"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                expr-tuning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/extRefactor/ext/icu/sqliteicu.h"
               data-name="extRefactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                extRefactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/extra-testcase-macros/ext/icu/sqliteicu.h"
               data-name="extra-testcase-macros"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                extra-testcase-macros
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/f2fs-test-fixes/ext/icu/sqliteicu.h"
               data-name="f2fs-test-fixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                f2fs-test-fixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/factor-constant-funcs/ext/icu/sqliteicu.h"
               data-name="factor-constant-funcs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                factor-constant-funcs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/failed-dropCell-opt/ext/icu/sqliteicu.h"
               data-name="failed-dropCell-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                failed-dropCell-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/failed-optimization/ext/icu/sqliteicu.h"
               data-name="failed-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                failed-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fast-secure-delete/ext/icu/sqliteicu.h"
               data-name="fast-secure-delete"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fast-secure-delete
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/faster-OP_Column/ext/icu/sqliteicu.h"
               data-name="faster-OP_Column"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                faster-OP_Column
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/faster-analyze/ext/icu/sqliteicu.h"
               data-name="faster-analyze"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                faster-analyze
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/faster-order-by-limit/ext/icu/sqliteicu.h"
               data-name="faster-order-by-limit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                faster-order-by-limit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/faster-pcache1-fetch/ext/icu/sqliteicu.h"
               data-name="faster-pcache1-fetch"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                faster-pcache1-fetch
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/faster-typeof-and-length/ext/icu/sqliteicu.h"
               data-name="faster-typeof-and-length"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                faster-typeof-and-length
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fcntl_shm_read/ext/icu/sqliteicu.h"
               data-name="fcntl_shm_read"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fcntl_shm_read
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/file-control-journal/ext/icu/sqliteicu.h"
               data-name="file-control-journal"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                file-control-journal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/file-control-pragma/ext/icu/sqliteicu.h"
               data-name="file-control-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                file-control-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/filesize-debug/ext/icu/sqliteicu.h"
               data-name="filesize-debug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                filesize-debug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/five-digit-year/ext/icu/sqliteicu.h"
               data-name="five-digit-year"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                five-digit-year
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fix-stale-keyinfo-cache/ext/icu/sqliteicu.h"
               data-name="fix-stale-keyinfo-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fix-stale-keyinfo-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fkc-missing-parent-tables/ext/icu/sqliteicu.h"
               data-name="fkc-missing-parent-tables"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fkc-missing-parent-tables
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fkey-missing-indexes/ext/icu/sqliteicu.h"
               data-name="fkey-missing-indexes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fkey-missing-indexes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fkey-optimization/ext/icu/sqliteicu.h"
               data-name="fkey-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fkey-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/flattener-column-names/ext/icu/sqliteicu.h"
               data-name="flattener-column-names"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                flattener-column-names
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/flattener-in-new-file/ext/icu/sqliteicu.h"
               data-name="flattener-in-new-file"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                flattener-in-new-file
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/floating-point-conversions/ext/icu/sqliteicu.h"
               data-name="floating-point-conversions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                floating-point-conversions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/follow-symlinks/ext/icu/sqliteicu.h"
               data-name="follow-symlinks"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                follow-symlinks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fordelete-assert/ext/icu/sqliteicu.h"
               data-name="fordelete-assert"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fordelete-assert
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/foreign-key-check/ext/icu/sqliteicu.h"
               data-name="foreign-key-check"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                foreign-key-check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fsDirFix/ext/icu/sqliteicu.h"
               data-name="fsDirFix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fsDirFix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fsVfsWin/ext/icu/sqliteicu.h"
               data-name="fsVfsWin"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fsVfsWin
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts-languageid-bits/ext/icu/sqliteicu.h"
               data-name="fts-languageid-bits"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts-languageid-bits
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-changes/ext/icu/sqliteicu.h"
               data-name="fts3-changes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-changes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-experimental/ext/icu/sqliteicu.h"
               data-name="fts3-experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-expr-rebalance/ext/icu/sqliteicu.h"
               data-name="fts3-expr-rebalance"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-expr-rebalance
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-int-cursor/ext/icu/sqliteicu.h"
               data-name="fts3-int-cursor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-int-cursor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-matchinfo-y/ext/icu/sqliteicu.h"
               data-name="fts3-matchinfo-y"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-matchinfo-y
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-prefix-query-fix/ext/icu/sqliteicu.h"
               data-name="fts3-prefix-query-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-prefix-query-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-prefix-search/ext/icu/sqliteicu.h"
               data-name="fts3-prefix-search"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-prefix-search
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-refactor/ext/icu/sqliteicu.h"
               data-name="fts3-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts3-seekstmt-cache/ext/icu/sqliteicu.h"
               data-name="fts3-seekstmt-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts3-seekstmt-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-auto-incr-merge/ext/icu/sqliteicu.h"
               data-name="fts4-auto-incr-merge"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-auto-incr-merge
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-content/ext/icu/sqliteicu.h"
               data-name="fts4-content"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-content
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-docid-range-constraints/ext/icu/sqliteicu.h"
               data-name="fts4-docid-range-constraints"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-docid-range-constraints
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-experimental/ext/icu/sqliteicu.h"
               data-name="fts4-experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-incr-merge-exp/ext/icu/sqliteicu.h"
               data-name="fts4-incr-merge-exp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-incr-merge-exp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-incr-merge/ext/icu/sqliteicu.h"
               data-name="fts4-incr-merge"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-incr-merge
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-languageid/ext/icu/sqliteicu.h"
               data-name="fts4-languageid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-languageid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-notindexed/ext/icu/sqliteicu.h"
               data-name="fts4-notindexed"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-notindexed
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4-unicode/ext/icu/sqliteicu.h"
               data-name="fts4-unicode"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4-unicode
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts4aux/ext/icu/sqliteicu.h"
               data-name="fts4aux"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts4aux
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5-btree-index/ext/icu/sqliteicu.h"
               data-name="fts5-btree-index"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5-btree-index
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5-data-version/ext/icu/sqliteicu.h"
               data-name="fts5-data-version"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5-data-version
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5-incompatible/ext/icu/sqliteicu.h"
               data-name="fts5-incompatible"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5-incompatible
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5-offsets/ext/icu/sqliteicu.h"
               data-name="fts5-offsets"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5-offsets
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5-perf/ext/icu/sqliteicu.h"
               data-name="fts5-perf"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5-perf
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5-snippet-bias/ext/icu/sqliteicu.h"
               data-name="fts5-snippet-bias"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5-snippet-bias
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5Msvc/ext/icu/sqliteicu.h"
               data-name="fts5Msvc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5Msvc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5NoWarn/ext/icu/sqliteicu.h"
               data-name="fts5NoWarn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5NoWarn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fts5/ext/icu/sqliteicu.h"
               data-name="fts5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fts5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ftsWarnings/ext/icu/sqliteicu.h"
               data-name="ftsWarnings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ftsWarnings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fullscan-covering-index/ext/icu/sqliteicu.h"
               data-name="fullscan-covering-index"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fullscan-covering-index
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/funcTestEncoding/ext/icu/sqliteicu.h"
               data-name="funcTestEncoding"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                funcTestEncoding
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/function-ctx-cache/ext/icu/sqliteicu.h"
               data-name="function-ctx-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                function-ctx-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/fuzzcheck/ext/icu/sqliteicu.h"
               data-name="fuzzcheck"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                fuzzcheck
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/generalize-interrupt/ext/icu/sqliteicu.h"
               data-name="generalize-interrupt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                generalize-interrupt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/geojson/ext/icu/sqliteicu.h"
               data-name="geojson"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                geojson
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/get-trace/ext/icu/sqliteicu.h"
               data-name="get-trace"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                get-trace
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/gnu-safe-math/ext/icu/sqliteicu.h"
               data-name="gnu-safe-math"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                gnu-safe-math
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/group-by-name-resolution/ext/icu/sqliteicu.h"
               data-name="group-by-name-resolution"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                group-by-name-resolution
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/having-where-optimization/ext/icu/sqliteicu.h"
               data-name="having-where-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                having-where-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/hex-literal/ext/icu/sqliteicu.h"
               data-name="hex-literal"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                hex-literal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/hidden-columns-in-tables/ext/icu/sqliteicu.h"
               data-name="hidden-columns-in-tables"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                hidden-columns-in-tables
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/hp-optimizer-fix/ext/icu/sqliteicu.h"
               data-name="hp-optimizer-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                hp-optimizer-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/icc-fix/ext/icu/sqliteicu.h"
               data-name="icc-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                icc-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ieee754-func/ext/icu/sqliteicu.h"
               data-name="ieee754-func"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ieee754-func
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ieee754/ext/icu/sqliteicu.h"
               data-name="ieee754"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ieee754
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/immutable-pager/ext/icu/sqliteicu.h"
               data-name="immutable-pager"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                immutable-pager
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/improved-index-scan/ext/icu/sqliteicu.h"
               data-name="improved-index-scan"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                improved-index-scan
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/improved-integrity-check/ext/icu/sqliteicu.h"
               data-name="improved-integrity-check"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                improved-integrity-check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/improved-update/ext/icu/sqliteicu.h"
               data-name="improved-update"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                improved-update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/in-scan-vs-index/ext/icu/sqliteicu.h"
               data-name="in-scan-vs-index"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                in-scan-vs-index
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/incr-vacuum-opt/ext/icu/sqliteicu.h"
               data-name="incr-vacuum-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                incr-vacuum-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/increased-sorting-cost/ext/icu/sqliteicu.h"
               data-name="increased-sorting-cost"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                increased-sorting-cost
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index-expr/ext/icu/sqliteicu.h"
               data-name="index-expr"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index-expr
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index-info-on-table/ext/icu/sqliteicu.h"
               data-name="index-info-on-table"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index-info-on-table
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index-is-operator/ext/icu/sqliteicu.h"
               data-name="index-is-operator"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index-is-operator
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index-on-date-func/ext/icu/sqliteicu.h"
               data-name="index-on-date-func"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index-on-date-func
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index-scan-rate/ext/icu/sqliteicu.h"
               data-name="index-scan-rate"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index-scan-rate
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index-shape-1/ext/icu/sqliteicu.h"
               data-name="index-shape-1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index-shape-1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/index_xinfo/ext/icu/sqliteicu.h"
               data-name="index_xinfo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                index_xinfo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/indexList/ext/icu/sqliteicu.h"
               data-name="indexList"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                indexList
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/infinite-with-loop-bug/ext/icu/sqliteicu.h"
               data-name="infinite-with-loop-bug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                infinite-with-loop-bug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/initmode-testctrl/ext/icu/sqliteicu.h"
               data-name="initmode-testctrl"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                initmode-testctrl
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/inner-loop-cost/ext/icu/sqliteicu.h"
               data-name="inner-loop-cost"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                inner-loop-cost
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/insert-optimization/ext/icu/sqliteicu.h"
               data-name="insert-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                insert-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/insert-select-opt/ext/icu/sqliteicu.h"
               data-name="insert-select-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                insert-select-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/instr/ext/icu/sqliteicu.h"
               data-name="instr"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                instr
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/int-float-compare/ext/icu/sqliteicu.h"
               data-name="int-float-compare"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                int-float-compare
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/int-float-precision/ext/icu/sqliteicu.h"
               data-name="int-float-precision"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                int-float-precision
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/integrity-check-heap/ext/icu/sqliteicu.h"
               data-name="integrity-check-heap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                integrity-check-heap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/integrity-check-improvements/ext/icu/sqliteicu.h"
               data-name="integrity-check-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                integrity-check-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/integrity-check-refactor/ext/icu/sqliteicu.h"
               data-name="integrity-check-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                integrity-check-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/interruptible-checkpoint/ext/icu/sqliteicu.h"
               data-name="interruptible-checkpoint"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                interruptible-checkpoint
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/io-opt/ext/icu/sqliteicu.h"
               data-name="io-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                io-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/is-distinct-from/ext/icu/sqliteicu.h"
               data-name="is-distinct-from"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                is-distinct-from
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/is-true-operator/ext/icu/sqliteicu.h"
               data-name="is-true-operator"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                is-true-operator
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/join-strength-reduction/ext/icu/sqliteicu.h"
               data-name="join-strength-reduction"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                join-strength-reduction
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/json-fuzz/ext/icu/sqliteicu.h"
               data-name="json-fuzz"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                json-fuzz
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/json_mergepatch/ext/icu/sqliteicu.h"
               data-name="json_mergepatch"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                json_mergepatch
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/json_quote/ext/icu/sqliteicu.h"
               data-name="json_quote"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                json_quote
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/json/ext/icu/sqliteicu.h"
               data-name="json"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                json
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/kv-access-opt-demo/ext/icu/sqliteicu.h"
               data-name="kv-access-opt-demo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                kv-access-opt-demo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/kvtest/ext/icu/sqliteicu.h"
               data-name="kvtest"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                kvtest
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/left-join-fix/ext/icu/sqliteicu.h"
               data-name="left-join-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                left-join-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/left-join-omit-fix/ext/icu/sqliteicu.h"
               data-name="left-join-omit-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                left-join-omit-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/left-join-optimization/ext/icu/sqliteicu.h"
               data-name="left-join-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                left-join-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/left-join-view/ext/icu/sqliteicu.h"
               data-name="left-join-view"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                left-join-view
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/leftjoin-or-fix/ext/icu/sqliteicu.h"
               data-name="leftjoin-or-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                leftjoin-or-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/legacy-alter-table/ext/icu/sqliteicu.h"
               data-name="legacy-alter-table"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                legacy-alter-table
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lemon-improvements/ext/icu/sqliteicu.h"
               data-name="lemon-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lemon-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lemon-update-2010/ext/icu/sqliteicu.h"
               data-name="lemon-update-2010"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lemon-update-2010
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lemon-update/ext/icu/sqliteicu.h"
               data-name="lemon-update"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lemon-update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lemon-updates/ext/icu/sqliteicu.h"
               data-name="lemon-updates"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lemon-updates
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/level-pseudocolumn/ext/icu/sqliteicu.h"
               data-name="level-pseudocolumn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                level-pseudocolumn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/like-compare-opt/ext/icu/sqliteicu.h"
               data-name="like-compare-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                like-compare-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/like-opt-fix/ext/icu/sqliteicu.h"
               data-name="like-opt-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                like-opt-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/limit-printf-width/ext/icu/sqliteicu.h"
               data-name="limit-printf-width"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                limit-printf-width
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/linear-interpolation/ext/icu/sqliteicu.h"
               data-name="linear-interpolation"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                linear-interpolation
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/linenoise/ext/icu/sqliteicu.h"
               data-name="linenoise"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                linenoise
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/list-pragmas/ext/icu/sqliteicu.h"
               data-name="list-pragmas"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                list-pragmas
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/load-ext-security/ext/icu/sqliteicu.h"
               data-name="load-ext-security"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                load-ext-security
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/load-permanently/ext/icu/sqliteicu.h"
               data-name="load-permanently"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                load-permanently
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/loadext/ext/icu/sqliteicu.h"
               data-name="loadext"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                loadext
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/location-function/ext/icu/sqliteicu.h"
               data-name="location-function"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                location-function
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/log-stats/ext/icu/sqliteicu.h"
               data-name="log-stats"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                log-stats
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lowlevel-lock-timeout/ext/icu/sqliteicu.h"
               data-name="lowlevel-lock-timeout"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lowlevel-lock-timeout
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lsm-metapage-fix/ext/icu/sqliteicu.h"
               data-name="lsm-metapage-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lsm-metapage-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/lsm-vtab/ext/icu/sqliteicu.h"
               data-name="lsm-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                lsm-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/malformed-vtab-name/ext/icu/sqliteicu.h"
               data-name="malformed-vtab-name"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                malformed-vtab-name
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/malloc-enhancement/ext/icu/sqliteicu.h"
               data-name="malloc-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                malloc-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/malloc-testing/ext/icu/sqliteicu.h"
               data-name="malloc-testing"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                malloc-testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/many-VALUEs/ext/icu/sqliteicu.h"
               data-name="many-VALUEs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                many-VALUEs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/many-app-functions/ext/icu/sqliteicu.h"
               data-name="many-app-functions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                many-app-functions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/master-journal-temp-files/ext/icu/sqliteicu.h"
               data-name="master-journal-temp-files"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master-journal-temp-files
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/mackyle/sqlite/blob/master/ext/icu/sqliteicu.h"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/materialized-view-reuse/ext/icu/sqliteicu.h"
               data-name="materialized-view-reuse"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                materialized-view-reuse
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/max-memory-option/ext/icu/sqliteicu.h"
               data-name="max-memory-option"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                max-memory-option
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mbcs-shell/ext/icu/sqliteicu.h"
               data-name="mbcs-shell"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mbcs-shell
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memTests/ext/icu/sqliteicu.h"
               data-name="memTests"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memTests
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memdb-opt/ext/icu/sqliteicu.h"
               data-name="memdb-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memdb-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memdb-warning/ext/icu/sqliteicu.h"
               data-name="memdb-warning"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memdb-warning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memdb/ext/icu/sqliteicu.h"
               data-name="memdb"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memdb
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memjournal-exp/ext/icu/sqliteicu.h"
               data-name="memjournal-exp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memjournal-exp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memleak/ext/icu/sqliteicu.h"
               data-name="memleak"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memleak
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memstat-vtab/ext/icu/sqliteicu.h"
               data-name="memstat-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memstat-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/memsys5-performance/ext/icu/sqliteicu.h"
               data-name="memsys5-performance"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                memsys5-performance
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/merge-sort/ext/icu/sqliteicu.h"
               data-name="merge-sort"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                merge-sort
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/micro-optimizations/ext/icu/sqliteicu.h"
               data-name="micro-optimizations"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                micro-optimizations
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mingw4x/ext/icu/sqliteicu.h"
               data-name="mingw4x"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mingw4x
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/minmax-opt/ext/icu/sqliteicu.h"
               data-name="minmax-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                minmax-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/minor-altertab-simplification/ext/icu/sqliteicu.h"
               data-name="minor-altertab-simplification"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                minor-altertab-simplification
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/missing-journal-file/ext/icu/sqliteicu.h"
               data-name="missing-journal-file"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                missing-journal-file
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mistake/ext/icu/sqliteicu.h"
               data-name="mistake"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mistake
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mksourceid/ext/icu/sqliteicu.h"
               data-name="mksourceid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mksourceid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mmap-experimental/ext/icu/sqliteicu.h"
               data-name="mmap-experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mmap-experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mmap-size-limit/ext/icu/sqliteicu.h"
               data-name="mmap-size-limit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mmap-size-limit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mmap-wal-bigtrans/ext/icu/sqliteicu.h"
               data-name="mmap-wal-bigtrans"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mmap-wal-bigtrans
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mmap-warm/ext/icu/sqliteicu.h"
               data-name="mmap-warm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mmap-warm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mmapDisabled/ext/icu/sqliteicu.h"
               data-name="mmapDisabled"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mmapDisabled
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mp-releasetest/ext/icu/sqliteicu.h"
               data-name="mp-releasetest"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mp-releasetest
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mptest/ext/icu/sqliteicu.h"
               data-name="mptest"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mptest
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvc2015/ext/icu/sqliteicu.h"
               data-name="msvc2015"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvc2015
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcDebug/ext/icu/sqliteicu.h"
               data-name="msvcDebug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcDebug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcFixes/ext/icu/sqliteicu.h"
               data-name="msvcFixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcFixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcMakeMin/ext/icu/sqliteicu.h"
               data-name="msvcMakeMin"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcMakeMin
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcThreads/ext/icu/sqliteicu.h"
               data-name="msvcThreads"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcThreads
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcW4/ext/icu/sqliteicu.h"
               data-name="msvcW4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcW4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcWarn/ext/icu/sqliteicu.h"
               data-name="msvcWarn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcWarn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/msvcWarnings/ext/icu/sqliteicu.h"
               data-name="msvcWarnings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                msvcWarnings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/multi-arg-pragma/ext/icu/sqliteicu.h"
               data-name="multi-arg-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                multi-arg-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/multi-or-covering-index/ext/icu/sqliteicu.h"
               data-name="multi-or-covering-index"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                multi-or-covering-index
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/multikey-opt-idea/ext/icu/sqliteicu.h"
               data-name="multikey-opt-idea"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                multikey-opt-idea
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/multiplex-enhancements/ext/icu/sqliteicu.h"
               data-name="multiplex-enhancements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                multiplex-enhancements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/multiplex-parallel-read/ext/icu/sqliteicu.h"
               data-name="multiplex-parallel-read"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                multiplex-parallel-read
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/multithreaded-checks/ext/icu/sqliteicu.h"
               data-name="multithreaded-checks"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                multithreaded-checks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutex-free-pcache/ext/icu/sqliteicu.h"
               data-name="mutex-free-pcache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutex-free-pcache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutex-free-randomness/ext/icu/sqliteicu.h"
               data-name="mutex-free-randomness"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutex-free-randomness
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutexDbg/ext/icu/sqliteicu.h"
               data-name="mutexDbg"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutexDbg
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutexDbg2/ext/icu/sqliteicu.h"
               data-name="mutexDbg2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutexDbg2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutexInitCmpSwap/ext/icu/sqliteicu.h"
               data-name="mutexInitCmpSwap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutexInitCmpSwap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutexInitIsInitReCheck/ext/icu/sqliteicu.h"
               data-name="mutexInitIsInitReCheck"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutexInitIsInitReCheck
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/mutexInitSimpleCmpSwap/ext/icu/sqliteicu.h"
               data-name="mutexInitSimpleCmpSwap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                mutexInitSimpleCmpSwap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nVDestroy/ext/icu/sqliteicu.h"
               data-name="nVDestroy"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nVDestroy
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/name-resolution-fix/ext/icu/sqliteicu.h"
               data-name="name-resolution-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                name-resolution-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/named-check-constraints/ext/icu/sqliteicu.h"
               data-name="named-check-constraints"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                named-check-constraints
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nested-agg/ext/icu/sqliteicu.h"
               data-name="nested-agg"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nested-agg
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nextgen-query-plan-exp/ext/icu/sqliteicu.h"
               data-name="nextgen-query-plan-exp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nextgen-query-plan-exp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nextgen-query-plan-fast/ext/icu/sqliteicu.h"
               data-name="nextgen-query-plan-fast"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nextgen-query-plan-fast
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nextgen-query-plan-logcost/ext/icu/sqliteicu.h"
               data-name="nextgen-query-plan-logcost"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nextgen-query-plan-logcost
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/no-ckpt-on-close/ext/icu/sqliteicu.h"
               data-name="no-ckpt-on-close"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                no-ckpt-on-close
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/no-overread/ext/icu/sqliteicu.h"
               data-name="no-overread"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                no-overread
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/no-rowid-in-cte/ext/icu/sqliteicu.h"
               data-name="no-rowid-in-cte"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                no-rowid-in-cte
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noMemBkpt/ext/icu/sqliteicu.h"
               data-name="noMemBkpt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noMemBkpt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noMemType/ext/icu/sqliteicu.h"
               data-name="noMemType"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noMemType
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noTclLibs/ext/icu/sqliteicu.h"
               data-name="noTclLibs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noTclLibs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noWarn/ext/icu/sqliteicu.h"
               data-name="noWarn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noWarn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noWarnings/ext/icu/sqliteicu.h"
               data-name="noWarnings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noWarnings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nonblocking-rollback/ext/icu/sqliteicu.h"
               data-name="nonblocking-rollback"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nonblocking-rollback
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noop-update-reprepare/ext/icu/sqliteicu.h"
               data-name="noop-update-reprepare"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noop-update-reprepare
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/normalize/ext/icu/sqliteicu.h"
               data-name="normalize"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                normalize
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/noskipscan-token/ext/icu/sqliteicu.h"
               data-name="noskipscan-token"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                noskipscan-token
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/nx-devkit/ext/icu/sqliteicu.h"
               data-name="nx-devkit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                nx-devkit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ofd-locks/ext/icu/sqliteicu.h"
               data-name="ofd-locks"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ofd-locks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-awk/ext/icu/sqliteicu.h"
               data-name="omit-awk"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-awk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-column-cache/ext/icu/sqliteicu.h"
               data-name="omit-column-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-column-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-fixes/ext/icu/sqliteicu.h"
               data-name="omit-fixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-fixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-fstat-after-unlink/ext/icu/sqliteicu.h"
               data-name="omit-fstat-after-unlink"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-fstat-after-unlink
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-join-table-opt/ext/icu/sqliteicu.h"
               data-name="omit-join-table-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-join-table-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-left-join-fix/ext/icu/sqliteicu.h"
               data-name="omit-left-join-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-left-join-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-rowid/ext/icu/sqliteicu.h"
               data-name="omit-rowid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-rowid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/omit-wal-fix/ext/icu/sqliteicu.h"
               data-name="omit-wal-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                omit-wal-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/one-writable-btree/ext/icu/sqliteicu.h"
               data-name="one-writable-btree"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                one-writable-btree
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/onepass-delete-or/ext/icu/sqliteicu.h"
               data-name="onepass-delete-or"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                onepass-delete-or
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/onepass-delete/ext/icu/sqliteicu.h"
               data-name="onepass-delete"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                onepass-delete
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/onepass-update/ext/icu/sqliteicu.h"
               data-name="onepass-update"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                onepass-update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/oom-handling/ext/icu/sqliteicu.h"
               data-name="oom-handling"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                oom-handling
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/open-only-once/ext/icu/sqliteicu.h"
               data-name="open-only-once"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                open-only-once
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/optimize-cellinfo/ext/icu/sqliteicu.h"
               data-name="optimize-cellinfo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                optimize-cellinfo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/optimize-delete/ext/icu/sqliteicu.h"
               data-name="optimize-delete"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                optimize-delete
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/optimize-vdbecursor/ext/icu/sqliteicu.h"
               data-name="optimize-vdbecursor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                optimize-vdbecursor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/or-opt/ext/icu/sqliteicu.h"
               data-name="or-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                or-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/or-optimization/ext/icu/sqliteicu.h"
               data-name="or-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                or-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/orderby-fix/ext/icu/sqliteicu.h"
               data-name="orderby-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                orderby-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/orderby-limit/ext/icu/sqliteicu.h"
               data-name="orderby-limit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                orderby-limit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/orderby-planning/ext/icu/sqliteicu.h"
               data-name="orderby-planning"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                orderby-planning
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ota-update-no-pager_ota_mode/ext/icu/sqliteicu.h"
               data-name="ota-update-no-pager_ota_mode"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ota-update-no-pager_ota_mode
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ota-update/ext/icu/sqliteicu.h"
               data-name="ota-update"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ota-update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/output-minmax-row/ext/icu/sqliteicu.h"
               data-name="output-minmax-row"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                output-minmax-row
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/overflow-pgno-cache/ext/icu/sqliteicu.h"
               data-name="overflow-pgno-cache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                overflow-pgno-cache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/overwrite-avoidance/ext/icu/sqliteicu.h"
               data-name="overwrite-avoidance"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                overwrite-avoidance
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ovfloffset-macro/ext/icu/sqliteicu.h"
               data-name="ovfloffset-macro"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ovfloffset-macro
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pagePerSector/ext/icu/sqliteicu.h"
               data-name="pagePerSector"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pagePerSector
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pager-blockalloc/ext/icu/sqliteicu.h"
               data-name="pager-blockalloc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pager-blockalloc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pager-dev/ext/icu/sqliteicu.h"
               data-name="pager-dev"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pager-dev
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pager-get-method/ext/icu/sqliteicu.h"
               data-name="pager-get-method"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pager-get-method
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pager-get-noinit/ext/icu/sqliteicu.h"
               data-name="pager-get-noinit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pager-get-noinit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/parser-enhancements/ext/icu/sqliteicu.h"
               data-name="parser-enhancements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                parser-enhancements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/parser-performance/ext/icu/sqliteicu.h"
               data-name="parser-performance"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                parser-performance
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/partial-index-variables/ext/icu/sqliteicu.h"
               data-name="partial-index-variables"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                partial-index-variables
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/partial-indices/ext/icu/sqliteicu.h"
               data-name="partial-indices"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                partial-indices
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pass-pointer-as-blob/ext/icu/sqliteicu.h"
               data-name="pass-pointer-as-blob"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pass-pointer-as-blob
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pattern-compare-optimization/ext/icu/sqliteicu.h"
               data-name="pattern-compare-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pattern-compare-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pcache-bulk-local/ext/icu/sqliteicu.h"
               data-name="pcache-bulk-local"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pcache-bulk-local
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pcache1-zero-page/ext/icu/sqliteicu.h"
               data-name="pcache1-zero-page"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pcache1-zero-page
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/permutations-fix/ext/icu/sqliteicu.h"
               data-name="permutations-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                permutations-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/persistent-extensions/ext/icu/sqliteicu.h"
               data-name="persistent-extensions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                persistent-extensions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/persistent-wal-patch/ext/icu/sqliteicu.h"
               data-name="persistent-wal-patch"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                persistent-wal-patch
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/planner-fix/ext/icu/sqliteicu.h"
               data-name="planner-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                planner-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/planner-improvements/ext/icu/sqliteicu.h"
               data-name="planner-improvements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                planner-improvements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pointer-types/ext/icu/sqliteicu.h"
               data-name="pointer-types"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pointer-types
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pointer-with-destructor/ext/icu/sqliteicu.h"
               data-name="pointer-with-destructor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pointer-with-destructor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/popenMsvc/ext/icu/sqliteicu.h"
               data-name="popenMsvc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                popenMsvc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pragma-as-vtab/ext/icu/sqliteicu.h"
               data-name="pragma-as-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pragma-as-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pragma-columncount-fix/ext/icu/sqliteicu.h"
               data-name="pragma-columncount-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pragma-columncount-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pragma-noop-update/ext/icu/sqliteicu.h"
               data-name="pragma-noop-update"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pragma-noop-update
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pragma-onconflict/ext/icu/sqliteicu.h"
               data-name="pragma-onconflict"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pragma-onconflict
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pragma-table-ipk/ext/icu/sqliteicu.h"
               data-name="pragma-table-ipk"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pragma-table-ipk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pragma-table-vinfo/ext/icu/sqliteicu.h"
               data-name="pragma-table-vinfo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pragma-table-vinfo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pread/ext/icu/sqliteicu.h"
               data-name="pread"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pread
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/prefer-coroutine-sort-subquery/ext/icu/sqliteicu.h"
               data-name="prefer-coroutine-sort-subquery"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                prefer-coroutine-sort-subquery
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/preload-pragma/ext/icu/sqliteicu.h"
               data-name="preload-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                preload-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/prepare_v3/ext/icu/sqliteicu.h"
               data-name="prepare_v3"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                prepare_v3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/preupdate-without-rowid/ext/icu/sqliteicu.h"
               data-name="preupdate-without-rowid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                preupdate-without-rowid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/printf-enhancement/ext/icu/sqliteicu.h"
               data-name="printf-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                printf-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/printf-optimization/ext/icu/sqliteicu.h"
               data-name="printf-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                printf-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/printf-sql-function/ext/icu/sqliteicu.h"
               data-name="printf-sql-function"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                printf-sql-function
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/propagate-const-opt/ext/icu/sqliteicu.h"
               data-name="propagate-const-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                propagate-const-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/prototype-int-array/ext/icu/sqliteicu.h"
               data-name="prototype-int-array"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                prototype-int-array
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pure-date-functions/ext/icu/sqliteicu.h"
               data-name="pure-date-functions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pure-date-functions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/push-down-backport/ext/icu/sqliteicu.h"
               data-name="push-down-backport"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                push-down-backport
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/push-down-disable/ext/icu/sqliteicu.h"
               data-name="push-down-disable"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                push-down-disable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/pushdown-optimization/ext/icu/sqliteicu.h"
               data-name="pushdown-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                pushdown-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/qp-enhancements/ext/icu/sqliteicu.h"
               data-name="qp-enhancements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                qp-enhancements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/query-plan-experiments/ext/icu/sqliteicu.h"
               data-name="query-plan-experiments"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                query-plan-experiments
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/query-planner-deadend/ext/icu/sqliteicu.h"
               data-name="query-planner-deadend"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                query-planner-deadend
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/query-planner-debug/ext/icu/sqliteicu.h"
               data-name="query-planner-debug"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                query-planner-debug
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/query-planner-fix/ext/icu/sqliteicu.h"
               data-name="query-planner-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                query-planner-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/query-planner-tweaks/ext/icu/sqliteicu.h"
               data-name="query-planner-tweaks"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                query-planner-tweaks
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/query_only/ext/icu/sqliteicu.h"
               data-name="query_only"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                query_only
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/quota-stdio/ext/icu/sqliteicu.h"
               data-name="quota-stdio"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                quota-stdio
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rbu-delete-then-insert/ext/icu/sqliteicu.h"
               data-name="rbu-delete-then-insert"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rbu-delete-then-insert
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rbu-percent-progress/ext/icu/sqliteicu.h"
               data-name="rbu-percent-progress"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rbu-percent-progress
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rbu-state-api/ext/icu/sqliteicu.h"
               data-name="rbu-state-api"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rbu-state-api
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rbu-vacuum/ext/icu/sqliteicu.h"
               data-name="rbu-vacuum"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rbu-vacuum
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/read-after-rollback/ext/icu/sqliteicu.h"
               data-name="read-after-rollback"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                read-after-rollback
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/readonly-wal-recovery/ext/icu/sqliteicu.h"
               data-name="readonly-wal-recovery"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                readonly-wal-recovery
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/recursive-selectdup/ext/icu/sqliteicu.h"
               data-name="recursive-selectdup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                recursive-selectdup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reduce-schema-size/ext/icu/sqliteicu.h"
               data-name="reduce-schema-size"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reduce-schema-size
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reduced-thread-contention/ext/icu/sqliteicu.h"
               data-name="reduced-thread-contention"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reduced-thread-contention
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/regexp-span/ext/icu/sqliteicu.h"
               data-name="regexp-span"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                regexp-span
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/regexp/ext/icu/sqliteicu.h"
               data-name="regexp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                regexp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/releasetest-refactor/ext/icu/sqliteicu.h"
               data-name="releasetest-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                releasetest-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rememberFunc/ext/icu/sqliteicu.h"
               data-name="rememberFunc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rememberFunc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reoptimizeArm/ext/icu/sqliteicu.h"
               data-name="reoptimizeArm"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reoptimizeArm
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reorder-column-opcodes/ext/icu/sqliteicu.h"
               data-name="reorder-column-opcodes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reorder-column-opcodes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/replace-fix/ext/icu/sqliteicu.h"
               data-name="replace-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                replace-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/require-write-txn/ext/icu/sqliteicu.h"
               data-name="require-write-txn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                require-write-txn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reset-database/ext/icu/sqliteicu.h"
               data-name="reset-database"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reset-database
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/retry-short-reads/ext/icu/sqliteicu.h"
               data-name="retry-short-reads"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                retry-short-reads
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reusable-pragma/ext/icu/sqliteicu.h"
               data-name="reusable-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reusable-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/reuse-schema/ext/icu/sqliteicu.h"
               data-name="reuse-schema"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                reuse-schema
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rework-EQP/ext/icu/sqliteicu.h"
               data-name="rework-EQP"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rework-EQP
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/row-size-est/ext/icu/sqliteicu.h"
               data-name="row-size-est"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                row-size-est
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rowvalue-update-trigger/ext/icu/sqliteicu.h"
               data-name="rowvalue-update-trigger"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rowvalue-update-trigger
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rowvalue/ext/icu/sqliteicu.h"
               data-name="rowvalue"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rowvalue
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-32bit-rounding/ext/icu/sqliteicu.h"
               data-name="rtree-32bit-rounding"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-32bit-rounding
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-blob-agressive-release/ext/icu/sqliteicu.h"
               data-name="rtree-blob-agressive-release"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-blob-agressive-release
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-enhancements/ext/icu/sqliteicu.h"
               data-name="rtree-enhancements"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-enhancements
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-geopoly/ext/icu/sqliteicu.h"
               data-name="rtree-geopoly"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-geopoly
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-integrity-check/ext/icu/sqliteicu.h"
               data-name="rtree-integrity-check"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-integrity-check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-one-pass/ext/icu/sqliteicu.h"
               data-name="rtree-one-pass"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-one-pass
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-queue/ext/icu/sqliteicu.h"
               data-name="rtree-queue"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-queue
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-sqlite3_blob/ext/icu/sqliteicu.h"
               data-name="rtree-sqlite3_blob"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-sqlite3_blob
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtree-update-optimization/ext/icu/sqliteicu.h"
               data-name="rtree-update-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtree-update-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/rtreeErrMsg/ext/icu/sqliteicu.h"
               data-name="rtreeErrMsg"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                rtreeErrMsg
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/safer-malloc/ext/icu/sqliteicu.h"
               data-name="safer-malloc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                safer-malloc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/save_sorter_stmt/ext/icu/sqliteicu.h"
               data-name="save_sorter_stmt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                save_sorter_stmt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/savepoint-rollback/ext/icu/sqliteicu.h"
               data-name="savepoint-rollback"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                savepoint-rollback
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/scanstatus/ext/icu/sqliteicu.h"
               data-name="scanstatus"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                scanstatus
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/schema-parse-refactor/ext/icu/sqliteicu.h"
               data-name="schema-parse-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                schema-parse-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/schema-storage/ext/icu/sqliteicu.h"
               data-name="schema-storage"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                schema-storage
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/schema2-vtab/ext/icu/sqliteicu.h"
               data-name="schema2-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                schema2-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/schemalint-failure/ext/icu/sqliteicu.h"
               data-name="schemalint-failure"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                schemalint-failure
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/schemalint/ext/icu/sqliteicu.h"
               data-name="schemalint"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                schemalint
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/scrub-backup/ext/icu/sqliteicu.h"
               data-name="scrub-backup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                scrub-backup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/see-testing/ext/icu/sqliteicu.h"
               data-name="see-testing"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                see-testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/seek-eq/ext/icu/sqliteicu.h"
               data-name="seek-eq"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                seek-eq
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/seekeq-experiment/ext/icu/sqliteicu.h"
               data-name="seekeq-experiment"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                seekeq-experiment
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/select-trace/ext/icu/sqliteicu.h"
               data-name="select-trace"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                select-trace
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/select-wildcard/ext/icu/sqliteicu.h"
               data-name="select-wildcard"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                select-wildcard
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/separate-lock-mutex/ext/icu/sqliteicu.h"
               data-name="separate-lock-mutex"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                separate-lock-mutex
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/serializable-snapshot/ext/icu/sqliteicu.h"
               data-name="serializable-snapshot"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                serializable-snapshot
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/server-edition/ext/icu/sqliteicu.h"
               data-name="server-edition"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                server-edition
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/server-process-edition/ext/icu/sqliteicu.h"
               data-name="server-process-edition"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                server-process-edition
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/session-make/ext/icu/sqliteicu.h"
               data-name="session-make"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                session-make
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/session-retry/ext/icu/sqliteicu.h"
               data-name="session-retry"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                session-retry
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions-3.7.14/ext/icu/sqliteicu.h"
               data-name="sessions-3.7.14"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions-3.7.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions-diff/ext/icu/sqliteicu.h"
               data-name="sessions-diff"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions-diff
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions-fix/ext/icu/sqliteicu.h"
               data-name="sessions-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions-rebase/ext/icu/sqliteicu.h"
               data-name="sessions-rebase"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions-rebase
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions-stat1/ext/icu/sqliteicu.h"
               data-name="sessions-stat1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions-stat1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions-value-dup/ext/icu/sqliteicu.h"
               data-name="sessions-value-dup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions-value-dup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions_from_cli/ext/icu/sqliteicu.h"
               data-name="sessions_from_cli"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions_from_cli
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sessions/ext/icu/sqliteicu.h"
               data-name="sessions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sessions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/set-last-insert-rowid/ext/icu/sqliteicu.h"
               data-name="set-last-insert-rowid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                set-last-insert-rowid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shared-cache-fix/ext/icu/sqliteicu.h"
               data-name="shared-cache-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shared-cache-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shared-cache-fixes/ext/icu/sqliteicu.h"
               data-name="shared-cache-fixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shared-cache-fixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shared-cache-memdb/ext/icu/sqliteicu.h"
               data-name="shared-cache-memdb"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shared-cache-memdb
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shared-mapping-hack/ext/icu/sqliteicu.h"
               data-name="shared-mapping-hack"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shared-mapping-hack
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shared-schema/ext/icu/sqliteicu.h"
               data-name="shared-schema"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shared-schema
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shell-bindings/ext/icu/sqliteicu.h"
               data-name="shell-bindings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shell-bindings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shell-fix/ext/icu/sqliteicu.h"
               data-name="shell-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shell-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shell-print-refactor/ext/icu/sqliteicu.h"
               data-name="shell-print-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shell-print-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shell-wall-clock/ext/icu/sqliteicu.h"
               data-name="shell-wall-clock"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shell-wall-clock
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shm-mapping-fix/ext/icu/sqliteicu.h"
               data-name="shm-mapping-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shm-mapping-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/showdb-uri-option/ext/icu/sqliteicu.h"
               data-name="showdb-uri-option"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                showdb-uri-option
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/shunning-error/ext/icu/sqliteicu.h"
               data-name="shunning-error"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                shunning-error
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/simplify-or-clause/ext/icu/sqliteicu.h"
               data-name="simplify-or-clause"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                simplify-or-clause
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/simplify/ext/icu/sqliteicu.h"
               data-name="simplify"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                simplify
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/skip-ahead-distinct/ext/icu/sqliteicu.h"
               data-name="skip-ahead-distinct"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                skip-ahead-distinct
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/skip-scan-improvement/ext/icu/sqliteicu.h"
               data-name="skip-scan-improvement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                skip-scan-improvement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/skip-scan/ext/icu/sqliteicu.h"
               data-name="skip-scan"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                skip-scan
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/smaller-expr/ext/icu/sqliteicu.h"
               data-name="smaller-expr"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                smaller-expr
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/snapshot-cmp/ext/icu/sqliteicu.h"
               data-name="snapshot-cmp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                snapshot-cmp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/snapshot-get/ext/icu/sqliteicu.h"
               data-name="snapshot-get"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                snapshot-get
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/snapshots-lock-wal/ext/icu/sqliteicu.h"
               data-name="snapshots-lock-wal"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                snapshots-lock-wal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sort-column-opcodes/ext/icu/sqliteicu.h"
               data-name="sort-column-opcodes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sort-column-opcodes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sorter-coalesce-writes/ext/icu/sqliteicu.h"
               data-name="sorter-coalesce-writes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sorter-coalesce-writes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sorter-exp/ext/icu/sqliteicu.h"
               data-name="sorter-exp"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sorter-exp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sorter-limit-opt/ext/icu/sqliteicu.h"
               data-name="sorter-limit-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sorter-limit-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sorter-opt/ext/icu/sqliteicu.h"
               data-name="sorter-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sorter-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sorter-reference/ext/icu/sqliteicu.h"
               data-name="sorter-reference"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sorter-reference
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/span-refactor/ext/icu/sqliteicu.h"
               data-name="span-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                span-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/speedtest1/ext/icu/sqliteicu.h"
               data-name="speedtest1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                speedtest1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/spellfix-constraints/ext/icu/sqliteicu.h"
               data-name="spellfix-constraints"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                spellfix-constraints
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/spellfix-matchlen/ext/icu/sqliteicu.h"
               data-name="spellfix-matchlen"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                spellfix-matchlen
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/split-moveto/ext/icu/sqliteicu.h"
               data-name="split-moveto"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                split-moveto
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlar-shell-support/ext/icu/sqliteicu.h"
               data-name="sqlar-shell-support"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlar-shell-support
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqldiff-changeset/ext/icu/sqliteicu.h"
               data-name="sqldiff-changeset"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqldiff-changeset
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqldiff-vtab-support/ext/icu/sqliteicu.h"
               data-name="sqldiff-vtab-support"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqldiff-vtab-support
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite-corrupt-page/ext/icu/sqliteicu.h"
               data-name="sqlite-corrupt-page"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite-corrupt-page
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite_stat4/ext/icu/sqliteicu.h"
               data-name="sqlite_stat4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite_stat4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite_system_errno/ext/icu/sqliteicu.h"
               data-name="sqlite_system_errno"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite_system_errno
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_blob_reset/ext/icu/sqliteicu.h"
               data-name="sqlite3_blob_reset"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_blob_reset
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_db_log/ext/icu/sqliteicu.h"
               data-name="sqlite3_db_log"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_db_log
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3ext-fix/ext/icu/sqliteicu.h"
               data-name="sqlite3ext-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3ext-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_kv/ext/icu/sqliteicu.h"
               data-name="sqlite3_kv"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_kv
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3rbu.h-fix/ext/icu/sqliteicu.h"
               data-name="sqlite3rbu.h-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3rbu.h-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_snapshot_describe/ext/icu/sqliteicu.h"
               data-name="sqlite3_snapshot_describe"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_snapshot_describe
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_stmt_refresh/ext/icu/sqliteicu.h"
               data-name="sqlite3_stmt_refresh"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_stmt_refresh
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_stmt_retryable/ext/icu/sqliteicu.h"
               data-name="sqlite3_stmt_retryable"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_stmt_retryable
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_trace_v2/ext/icu/sqliteicu.h"
               data-name="sqlite3_trace_v2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_trace_v2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_value_nochange/ext/icu/sqliteicu.h"
               data-name="sqlite3_value_nochange"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_value_nochange
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqlite3_vtab_nochange/ext/icu/sqliteicu.h"
               data-name="sqlite3_vtab_nochange"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqlite3_vtab_nochange
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqliteIntMacros/ext/icu/sqliteicu.h"
               data-name="sqliteIntMacros"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqliteIntMacros
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/sqllog/ext/icu/sqliteicu.h"
               data-name="sqllog"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                sqllog
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ssdsim/ext/icu/sqliteicu.h"
               data-name="ssdsim"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ssdsim
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat-vtab-in-shell/ext/icu/sqliteicu.h"
               data-name="stat-vtab-in-shell"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat-vtab-in-shell
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat1-max/ext/icu/sqliteicu.h"
               data-name="stat1-max"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat1-max
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat2-enhancement/ext/icu/sqliteicu.h"
               data-name="stat2-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat2-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat3-3.7.2/ext/icu/sqliteicu.h"
               data-name="stat3-3.7.2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat3-3.7.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat3-enhancement/ext/icu/sqliteicu.h"
               data-name="stat3-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat3-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat3-trunk/ext/icu/sqliteicu.h"
               data-name="stat3-trunk"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat3-trunk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat4-avgeq/ext/icu/sqliteicu.h"
               data-name="stat4-avgeq"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat4-avgeq
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat4-change/ext/icu/sqliteicu.h"
               data-name="stat4-change"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat4-change
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat4-experimental/ext/icu/sqliteicu.h"
               data-name="stat4-experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat4-experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat4-function/ext/icu/sqliteicu.h"
               data-name="stat4-function"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat4-function
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat4-skipscan/ext/icu/sqliteicu.h"
               data-name="stat4-skipscan"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat4-skipscan
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stat4-without-rowid/ext/icu/sqliteicu.h"
               data-name="stat4-without-rowid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stat4-without-rowid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/status-vm-step/ext/icu/sqliteicu.h"
               data-name="status-vm-step"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                status-vm-step
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/status64/ext/icu/sqliteicu.h"
               data-name="status64"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                status64
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/statvfs/ext/icu/sqliteicu.h"
               data-name="statvfs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                statvfs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/std-ext/ext/icu/sqliteicu.h"
               data-name="std-ext"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                std-ext
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stdcall-3.8.8/ext/icu/sqliteicu.h"
               data-name="stdcall-3.8.8"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stdcall-3.8.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stdcall/ext/icu/sqliteicu.h"
               data-name="stdcall"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stdcall
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stdint.h/ext/icu/sqliteicu.h"
               data-name="stdint.h"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stdint.h
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/step-autoreset/ext/icu/sqliteicu.h"
               data-name="step-autoreset"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                step-autoreset
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stmt-journal-testing/ext/icu/sqliteicu.h"
               data-name="stmt-journal-testing"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stmt-journal-testing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stmts-vtab/ext/icu/sqliteicu.h"
               data-name="stmts-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stmts-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/stmtstatus-memused/ext/icu/sqliteicu.h"
               data-name="stmtstatus-memused"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                stmtstatus-memused
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/string-quoting-dump/ext/icu/sqliteicu.h"
               data-name="string-quoting-dump"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                string-quoting-dump
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/subquery-as-coroutine/ext/icu/sqliteicu.h"
               data-name="subquery-as-coroutine"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                subquery-as-coroutine
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/subquery-codegen-refactor/ext/icu/sqliteicu.h"
               data-name="subquery-codegen-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                subquery-codegen-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/subquery-limit-opt/ext/icu/sqliteicu.h"
               data-name="subquery-limit-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                subquery-limit-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/subquery-opt/ext/icu/sqliteicu.h"
               data-name="subquery-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                subquery-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/subtypes/ext/icu/sqliteicu.h"
               data-name="subtypes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                subtypes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/superlock/ext/icu/sqliteicu.h"
               data-name="superlock"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                superlock
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/syscall-override/ext/icu/sqliteicu.h"
               data-name="syscall-override"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                syscall-override
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tabfunc-in-left-join/ext/icu/sqliteicu.h"
               data-name="tabfunc-in-left-join"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tabfunc-in-left-join
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/table-driven-pragma/ext/icu/sqliteicu.h"
               data-name="table-driven-pragma"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                table-driven-pragma
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/table-valued-functions/ext/icu/sqliteicu.h"
               data-name="table-valued-functions"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                table-valued-functions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tclMode/ext/icu/sqliteicu.h"
               data-name="tclMode"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tclMode
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tclsqlite-cleanup/ext/icu/sqliteicu.h"
               data-name="tclsqlite-cleanup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tclsqlite-cleanup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/teaDoc/ext/icu/sqliteicu.h"
               data-name="teaDoc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                teaDoc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/temp-page-size/ext/icu/sqliteicu.h"
               data-name="temp-page-size"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                temp-page-size
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tempfiles-25/ext/icu/sqliteicu.h"
               data-name="tempfiles-25"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tempfiles-25
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tempfiles-lazy-open/ext/icu/sqliteicu.h"
               data-name="tempfiles-lazy-open"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tempfiles-lazy-open
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/test-bestindex/ext/icu/sqliteicu.h"
               data-name="test-bestindex"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                test-bestindex
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/test-in-subdir/ext/icu/sqliteicu.h"
               data-name="test-in-subdir"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                test-in-subdir
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/test-using-fuzzcheck/ext/icu/sqliteicu.h"
               data-name="test-using-fuzzcheck"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                test-using-fuzzcheck
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/test_delete/ext/icu/sqliteicu.h"
               data-name="test_delete"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                test_delete
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/testClean/ext/icu/sqliteicu.h"
               data-name="testClean"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                testClean
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/testFixes/ext/icu/sqliteicu.h"
               data-name="testFixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                testFixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/testFixtureSrc/ext/icu/sqliteicu.h"
               data-name="testFixtureSrc"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                testFixtureSrc
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/testFsWin32/ext/icu/sqliteicu.h"
               data-name="testFsWin32"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                testFsWin32
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/testerOutput/ext/icu/sqliteicu.h"
               data-name="testerOutput"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                testerOutput
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/threads-closed/ext/icu/sqliteicu.h"
               data-name="threads-closed"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                threads-closed
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/threads-experimental/ext/icu/sqliteicu.h"
               data-name="threads-experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                threads-experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/threads-sort-ex1/ext/icu/sqliteicu.h"
               data-name="threads-sort-ex1"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                threads-sort-ex1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/threads/ext/icu/sqliteicu.h"
               data-name="threads"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                threads
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/threadtest3/ext/icu/sqliteicu.h"
               data-name="threadtest3"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                threadtest3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/threadtest4/ext/icu/sqliteicu.h"
               data-name="threadtest4"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                threadtest4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ticket-16c9801ce/ext/icu/sqliteicu.h"
               data-name="ticket-16c9801ce"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ticket-16c9801ce
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ticket-71e333e7/ext/icu/sqliteicu.h"
               data-name="ticket-71e333e7"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ticket-71e333e7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/ticket-bfbf38e5e9/ext/icu/sqliteicu.h"
               data-name="ticket-bfbf38e5e9"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                ticket-bfbf38e5e9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-002caede898/ext/icu/sqliteicu.h"
               data-name="tkt-002caede898"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-002caede898
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-2f7170d7/ext/icu/sqliteicu.h"
               data-name="tkt-2f7170d7"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-2f7170d7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-5eaa61ea18/ext/icu/sqliteicu.h"
               data-name="tkt-5eaa61ea18"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-5eaa61ea18
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-8c63ff0eca/ext/icu/sqliteicu.h"
               data-name="tkt-8c63ff0eca"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-8c63ff0eca
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-2326c258/ext/icu/sqliteicu.h"
               data-name="tkt-2326c258"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-2326c258
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-2500cdb9be/ext/icu/sqliteicu.h"
               data-name="tkt-2500cdb9be"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-2500cdb9be
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-55746f9e/ext/icu/sqliteicu.h"
               data-name="tkt-55746f9e"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-55746f9e
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-6709574/ext/icu/sqliteicu.h"
               data-name="tkt-6709574"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-6709574
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-a7b7803e/ext/icu/sqliteicu.h"
               data-name="tkt-a7b7803e"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-a7b7803e
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-a8a0d2996a/ext/icu/sqliteicu.h"
               data-name="tkt-a8a0d2996a"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-a8a0d2996a
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-b41031ea/ext/icu/sqliteicu.h"
               data-name="tkt-b41031ea"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-b41031ea
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-e39d0325/ext/icu/sqliteicu.h"
               data-name="tkt-e39d0325"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-e39d0325
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tkt-f97c4637/ext/icu/sqliteicu.h"
               data-name="tkt-f97c4637"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tkt-f97c4637
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/toTypeFuncs/ext/icu/sqliteicu.h"
               data-name="toTypeFuncs"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                toTypeFuncs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tokenizer-char-class/ext/icu/sqliteicu.h"
               data-name="tokenizer-char-class"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tokenizer-char-class
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/toolWarnings/ext/icu/sqliteicu.h"
               data-name="toolWarnings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                toolWarnings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/transaction-pages/ext/icu/sqliteicu.h"
               data-name="transaction-pages"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                transaction-pages
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/transitive-constraints/ext/icu/sqliteicu.h"
               data-name="transitive-constraints"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                transitive-constraints
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/translit-tokenizer/ext/icu/sqliteicu.h"
               data-name="translit-tokenizer"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                translit-tokenizer
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tree-explain/ext/icu/sqliteicu.h"
               data-name="tree-explain"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tree-explain
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/tree-stat1-fix/ext/icu/sqliteicu.h"
               data-name="tree-stat1-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                tree-stat1-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/trigger-trace/ext/icu/sqliteicu.h"
               data-name="trigger-trace"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                trigger-trace
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/trim-nulls/ext/icu/sqliteicu.h"
               data-name="trim-nulls"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                trim-nulls
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/two-mappings/ext/icu/sqliteicu.h"
               data-name="two-mappings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                two-mappings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/typo/ext/icu/sqliteicu.h"
               data-name="typo"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                typo
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unicode-function/ext/icu/sqliteicu.h"
               data-name="unicode-function"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unicode-function
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/uninit-vdbe-mem/ext/icu/sqliteicu.h"
               data-name="uninit-vdbe-mem"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                uninit-vdbe-mem
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/union-vtab/ext/icu/sqliteicu.h"
               data-name="union-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                union-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unique-constraint-weights/ext/icu/sqliteicu.h"
               data-name="unique-constraint-weights"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unique-constraint-weights
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unix-excl/ext/icu/sqliteicu.h"
               data-name="unix-excl"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unix-excl
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unix-lock-fix-attempt/ext/icu/sqliteicu.h"
               data-name="unix-lock-fix-attempt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unix-lock-fix-attempt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unix-vfs-optimization/ext/icu/sqliteicu.h"
               data-name="unix-vfs-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unix-vfs-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unknown-function/ext/icu/sqliteicu.h"
               data-name="unknown-function"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unknown-function
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unlikely-func/ext/icu/sqliteicu.h"
               data-name="unlikely-func"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unlikely-func
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unordered-index-hack/ext/icu/sqliteicu.h"
               data-name="unordered-index-hack"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unordered-index-hack
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unpack-opcode/ext/icu/sqliteicu.h"
               data-name="unpack-opcode"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unpack-opcode
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unpacked-IdxInsert/ext/icu/sqliteicu.h"
               data-name="unpacked-IdxInsert"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unpacked-IdxInsert
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/unsetnull-option/ext/icu/sqliteicu.h"
               data-name="unsetnull-option"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                unsetnull-option
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/update-delete-limit-fix/ext/icu/sqliteicu.h"
               data-name="update-delete-limit-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                update-delete-limit-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/upsert-opt/ext/icu/sqliteicu.h"
               data-name="upsert-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                upsert-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/upsert-opt2/ext/icu/sqliteicu.h"
               data-name="upsert-opt2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                upsert-opt2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/upsert/ext/icu/sqliteicu.h"
               data-name="upsert"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                upsert
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/uri-00-error/ext/icu/sqliteicu.h"
               data-name="uri-00-error"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                uri-00-error
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/uri-enhancement/ext/icu/sqliteicu.h"
               data-name="uri-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                uri-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/uri/ext/icu/sqliteicu.h"
               data-name="uri"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                uri
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/user-auth/ext/icu/sqliteicu.h"
               data-name="user-auth"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                user-auth
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vacuum-attached-db/ext/icu/sqliteicu.h"
               data-name="vacuum-attached-db"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vacuum-attached-db
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/value-dup/ext/icu/sqliteicu.h"
               data-name="value-dup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                value-dup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vcreate-stmt/ext/icu/sqliteicu.h"
               data-name="vcreate-stmt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vcreate-stmt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vdbe-aux-perf/ext/icu/sqliteicu.h"
               data-name="vdbe-aux-perf"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vdbe-aux-perf
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vdbe-performance/ext/icu/sqliteicu.h"
               data-name="vdbe-performance"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vdbe-performance
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vdbe_cycle_limit/ext/icu/sqliteicu.h"
               data-name="vdbe_cycle_limit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vdbe_cycle_limit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vector-compare/ext/icu/sqliteicu.h"
               data-name="vector-compare"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vector-compare
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vector-size-check/ext/icu/sqliteicu.h"
               data-name="vector-size-check"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vector-size-check
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/version-3.17.0-rbu-fixes/ext/icu/sqliteicu.h"
               data-name="version-3.17.0-rbu-fixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                version-3.17.0-rbu-fixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/version_2/ext/icu/sqliteicu.h"
               data-name="version_2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                version_2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vfs-stdio/ext/icu/sqliteicu.h"
               data-name="vfs-stdio"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vfs-stdio
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vfsname-filectrl/ext/icu/sqliteicu.h"
               data-name="vfsname-filectrl"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vfsname-filectrl
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/view-optimization/ext/icu/sqliteicu.h"
               data-name="view-optimization"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                view-optimization
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vs2013/ext/icu/sqliteicu.h"
               data-name="vs2013"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vs2013
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsix-3.7.13/ext/icu/sqliteicu.h"
               data-name="vsix-3.7.13"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsix-3.7.13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsix2013/ext/icu/sqliteicu.h"
               data-name="vsix2013"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsix2013
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsix2015/ext/icu/sqliteicu.h"
               data-name="vsix2015"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsix2015
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsixFlavor/ext/icu/sqliteicu.h"
               data-name="vsixFlavor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsixFlavor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsixTest/ext/icu/sqliteicu.h"
               data-name="vsixTest"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsixTest
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsixWin32/ext/icu/sqliteicu.h"
               data-name="vsixWin32"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsixWin32
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vsixWinPhone81/ext/icu/sqliteicu.h"
               data-name="vsixWinPhone81"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vsixWinPhone81
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-IN-opt/ext/icu/sqliteicu.h"
               data-name="vtab-IN-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-IN-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-colused/ext/icu/sqliteicu.h"
               data-name="vtab-colused"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-colused
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-conflict/ext/icu/sqliteicu.h"
               data-name="vtab-conflict"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-conflict
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-experimental/ext/icu/sqliteicu.h"
               data-name="vtab-experimental"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-experimental
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-extra-ops/ext/icu/sqliteicu.h"
               data-name="vtab-extra-ops"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-extra-ops
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-func-constraint/ext/icu/sqliteicu.h"
               data-name="vtab-func-constraint"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-func-constraint
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-left-join/ext/icu/sqliteicu.h"
               data-name="vtab-left-join"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-left-join
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-like-operator/ext/icu/sqliteicu.h"
               data-name="vtab-like-operator"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-like-operator
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/vtab-onepass/ext/icu/sqliteicu.h"
               data-name="vtab-onepass"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                vtab-onepass
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-blocking-lock/ext/icu/sqliteicu.h"
               data-name="wal-blocking-lock"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-blocking-lock
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-header-sync/ext/icu/sqliteicu.h"
               data-name="wal-header-sync"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-header-sync
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-incr-ckpt/ext/icu/sqliteicu.h"
               data-name="wal-incr-ckpt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-incr-ckpt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-overwrite-frames/ext/icu/sqliteicu.h"
               data-name="wal-overwrite-frames"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-overwrite-frames
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-read-change/ext/icu/sqliteicu.h"
               data-name="wal-read-change"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-read-change
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-readonly/ext/icu/sqliteicu.h"
               data-name="wal-readonly"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-readonly
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-refactor/ext/icu/sqliteicu.h"
               data-name="wal-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-sync-refactor/ext/icu/sqliteicu.h"
               data-name="wal-sync-refactor"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-sync-refactor
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-trace-372/ext/icu/sqliteicu.h"
               data-name="wal-trace-372"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-trace-372
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-trace-375/ext/icu/sqliteicu.h"
               data-name="wal-trace-375"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-trace-375
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal-win32/ext/icu/sqliteicu.h"
               data-name="wal-win32"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal-win32
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal/ext/icu/sqliteicu.h"
               data-name="wal"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wal2/ext/icu/sqliteicu.h"
               data-name="wal2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wal2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/warnings/ext/icu/sqliteicu.h"
               data-name="warnings"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                warnings
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/weak-fallback/ext/icu/sqliteicu.h"
               data-name="weak-fallback"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                weak-fallback
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win-check-dir/ext/icu/sqliteicu.h"
               data-name="win-check-dir"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win-check-dir
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win10sdk/ext/icu/sqliteicu.h"
               data-name="win10sdk"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win10sdk
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32-none/ext/icu/sqliteicu.h"
               data-name="win32-none"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32-none
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32-test-fixes/ext/icu/sqliteicu.h"
               data-name="win32-test-fixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32-test-fixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32GetHandle/ext/icu/sqliteicu.h"
               data-name="win32GetHandle"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32GetHandle
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32Resources/ext/icu/sqliteicu.h"
               data-name="win32Resources"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32Resources
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32SetDir/ext/icu/sqliteicu.h"
               data-name="win32SetDir"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32SetDir
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32dir/ext/icu/sqliteicu.h"
               data-name="win32dir"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32dir
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32heap/ext/icu/sqliteicu.h"
               data-name="win32heap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32heap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/win32nolock/ext/icu/sqliteicu.h"
               data-name="win32nolock"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                win32nolock
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winCeLocalTime/ext/icu/sqliteicu.h"
               data-name="winCeLocalTime"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winCeLocalTime
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winCeWarn/ext/icu/sqliteicu.h"
               data-name="winCeWarn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winCeWarn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winDisableMmap/ext/icu/sqliteicu.h"
               data-name="winDisableMmap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winDisableMmap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winFileMapping/ext/icu/sqliteicu.h"
               data-name="winFileMapping"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winFileMapping
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winGetLastError/ext/icu/sqliteicu.h"
               data-name="winGetLastError"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winGetLastError
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winHdr/ext/icu/sqliteicu.h"
               data-name="winHdr"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winHdr
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winHeapSize/ext/icu/sqliteicu.h"
               data-name="winHeapSize"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winHeapSize
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winIoRetry/ext/icu/sqliteicu.h"
               data-name="winIoRetry"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winIoRetry
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winLockHandle/ext/icu/sqliteicu.h"
               data-name="winLockHandle"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winLockHandle
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winMmapNoWal/ext/icu/sqliteicu.h"
               data-name="winMmapNoWal"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winMmapNoWal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winMutex/ext/icu/sqliteicu.h"
               data-name="winMutex"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winMutex
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winNativeHeap/ext/icu/sqliteicu.h"
               data-name="winNativeHeap"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winNativeHeap
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winNotFound/ext/icu/sqliteicu.h"
               data-name="winNotFound"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winNotFound
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winOsTrace/ext/icu/sqliteicu.h"
               data-name="winOsTrace"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winOsTrace
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winPreCache/ext/icu/sqliteicu.h"
               data-name="winPreCache"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winPreCache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winSectorSize/ext/icu/sqliteicu.h"
               data-name="winSectorSize"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winSectorSize
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winSyscall/ext/icu/sqliteicu.h"
               data-name="winSyscall"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winSyscall
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winTest/ext/icu/sqliteicu.h"
               data-name="winTest"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winTest
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winViewFlush/ext/icu/sqliteicu.h"
               data-name="winViewFlush"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winViewFlush
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wince-fixes/ext/icu/sqliteicu.h"
               data-name="wince-fixes"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wince-fixes
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wince/ext/icu/sqliteicu.h"
               data-name="wince"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wince
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winopen-retry-logic/ext/icu/sqliteicu.h"
               data-name="winopen-retry-logic"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winopen-retry-logic
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/winrt/ext/icu/sqliteicu.h"
               data-name="winrt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                winrt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/withdrawn/ext/icu/sqliteicu.h"
               data-name="withdrawn"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                withdrawn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/without-rowid-or-opt/ext/icu/sqliteicu.h"
               data-name="without-rowid-or-opt"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                without-rowid-or-opt
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/without-rowid-vtab/ext/icu/sqliteicu.h"
               data-name="without-rowid-vtab"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                without-rowid-vtab
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/word-fuzzer/ext/icu/sqliteicu.h"
               data-name="word-fuzzer"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                word-fuzzer
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/wordcount-enhancement/ext/icu/sqliteicu.h"
               data-name="wordcount-enhancement"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                wordcount-enhancement
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/writable-vtab-without-rowid/ext/icu/sqliteicu.h"
               data-name="writable-vtab-without-rowid"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                writable-vtab-without-rowid
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/write-queue-flush-hack/ext/icu/sqliteicu.h"
               data-name="write-queue-flush-hack"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                write-queue-flush-hack
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/xbestindex-fix/ext/icu/sqliteicu.h"
               data-name="xbestindex-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                xbestindex-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zDbSName/ext/icu/sqliteicu.h"
               data-name="zDbSName"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zDbSName
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zero-base-aMem/ext/icu/sqliteicu.h"
               data-name="zero-base-aMem"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zero-base-aMem
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zero-byte-backup-fix/ext/icu/sqliteicu.h"
               data-name="zero-byte-backup-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zero-byte-backup-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zero-register/ext/icu/sqliteicu.h"
               data-name="zero-register"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zero-register
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zipfile-timestamp-fix/ext/icu/sqliteicu.h"
               data-name="zipfile-timestamp-fix"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zipfile-timestamp-fix
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zipvfs-multifile-commit/ext/icu/sqliteicu.h"
               data-name="zipvfs-multifile-commit"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zipvfs-multifile-commit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/mackyle/sqlite/blob/zonefile/ext/icu/sqliteicu.h"
               data-name="zonefile"
               data-skip-pjax="true"
               rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text">
                zonefile
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.25.2/ext/icu/sqliteicu.h"
              data-name="version-3.25.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.25.2">
                version-3.25.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.25.1/ext/icu/sqliteicu.h"
              data-name="version-3.25.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.25.1">
                version-3.25.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.25.0/ext/icu/sqliteicu.h"
              data-name="version-3.25.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.25.0">
                version-3.25.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.24.0/ext/icu/sqliteicu.h"
              data-name="version-3.24.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.24.0">
                version-3.24.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.23.2/ext/icu/sqliteicu.h"
              data-name="version-3.23.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.23.2">
                version-3.23.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.23.1/ext/icu/sqliteicu.h"
              data-name="version-3.23.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.23.1">
                version-3.23.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.23.0/ext/icu/sqliteicu.h"
              data-name="version-3.23.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.23.0">
                version-3.23.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.22.0/ext/icu/sqliteicu.h"
              data-name="version-3.22.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.22.0">
                version-3.22.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.21.0/ext/icu/sqliteicu.h"
              data-name="version-3.21.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.21.0">
                version-3.21.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.20.1/ext/icu/sqliteicu.h"
              data-name="version-3.20.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.20.1">
                version-3.20.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.20.0/ext/icu/sqliteicu.h"
              data-name="version-3.20.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.20.0">
                version-3.20.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.19.4/ext/icu/sqliteicu.h"
              data-name="version-3.19.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.19.4">
                version-3.19.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.19.3/ext/icu/sqliteicu.h"
              data-name="version-3.19.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.19.3">
                version-3.19.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.19.2/ext/icu/sqliteicu.h"
              data-name="version-3.19.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.19.2">
                version-3.19.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.19.1/ext/icu/sqliteicu.h"
              data-name="version-3.19.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.19.1">
                version-3.19.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.19.0/ext/icu/sqliteicu.h"
              data-name="version-3.19.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.19.0">
                version-3.19.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.18.2/ext/icu/sqliteicu.h"
              data-name="version-3.18.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.18.2">
                version-3.18.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.18.1/ext/icu/sqliteicu.h"
              data-name="version-3.18.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.18.1">
                version-3.18.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.18.0/ext/icu/sqliteicu.h"
              data-name="version-3.18.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.18.0">
                version-3.18.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.17.0/ext/icu/sqliteicu.h"
              data-name="version-3.17.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.17.0">
                version-3.17.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.16.2/ext/icu/sqliteicu.h"
              data-name="version-3.16.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.16.2">
                version-3.16.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.16.1/ext/icu/sqliteicu.h"
              data-name="version-3.16.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.16.1">
                version-3.16.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.16.0/ext/icu/sqliteicu.h"
              data-name="version-3.16.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.16.0">
                version-3.16.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.15.2/ext/icu/sqliteicu.h"
              data-name="version-3.15.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.15.2">
                version-3.15.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.15.1/ext/icu/sqliteicu.h"
              data-name="version-3.15.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.15.1">
                version-3.15.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.15.0/ext/icu/sqliteicu.h"
              data-name="version-3.15.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.15.0">
                version-3.15.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.14.2/ext/icu/sqliteicu.h"
              data-name="version-3.14.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.14.2">
                version-3.14.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.14.1/ext/icu/sqliteicu.h"
              data-name="version-3.14.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.14.1">
                version-3.14.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.14.0/ext/icu/sqliteicu.h"
              data-name="version-3.14.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.14.0">
                version-3.14.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.13.0/ext/icu/sqliteicu.h"
              data-name="version-3.13.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.13.0">
                version-3.13.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.12.2/ext/icu/sqliteicu.h"
              data-name="version-3.12.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.12.2">
                version-3.12.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.12.1/ext/icu/sqliteicu.h"
              data-name="version-3.12.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.12.1">
                version-3.12.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.12.0/ext/icu/sqliteicu.h"
              data-name="version-3.12.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.12.0">
                version-3.12.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.11.1/ext/icu/sqliteicu.h"
              data-name="version-3.11.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.11.1">
                version-3.11.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.11.0/ext/icu/sqliteicu.h"
              data-name="version-3.11.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.11.0">
                version-3.11.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.10.2/ext/icu/sqliteicu.h"
              data-name="version-3.10.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.10.2">
                version-3.10.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.10.1/ext/icu/sqliteicu.h"
              data-name="version-3.10.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.10.1">
                version-3.10.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.10.0/ext/icu/sqliteicu.h"
              data-name="version-3.10.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.10.0">
                version-3.10.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.9.3/ext/icu/sqliteicu.h"
              data-name="version-3.9.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.9.3">
                version-3.9.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.9.2/ext/icu/sqliteicu.h"
              data-name="version-3.9.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.9.2">
                version-3.9.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.9.1/ext/icu/sqliteicu.h"
              data-name="version-3.9.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.9.1">
                version-3.9.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.9.0/ext/icu/sqliteicu.h"
              data-name="version-3.9.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.9.0">
                version-3.9.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.11.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.11.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.11.1">
                version-3.8.11.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.11/ext/icu/sqliteicu.h"
              data-name="version-3.8.11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.11">
                version-3.8.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.10.2/ext/icu/sqliteicu.h"
              data-name="version-3.8.10.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.10.2">
                version-3.8.10.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.10.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.10.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.10.1">
                version-3.8.10.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.10/ext/icu/sqliteicu.h"
              data-name="version-3.8.10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.10">
                version-3.8.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.9/ext/icu/sqliteicu.h"
              data-name="version-3.8.9"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.9">
                version-3.8.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.8.3/ext/icu/sqliteicu.h"
              data-name="version-3.8.8.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.8.3">
                version-3.8.8.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.8.2/ext/icu/sqliteicu.h"
              data-name="version-3.8.8.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.8.2">
                version-3.8.8.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.8.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.8.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.8.1">
                version-3.8.8.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.8/ext/icu/sqliteicu.h"
              data-name="version-3.8.8"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.8">
                version-3.8.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.7.4/ext/icu/sqliteicu.h"
              data-name="version-3.8.7.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.7.4">
                version-3.8.7.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.7.3/ext/icu/sqliteicu.h"
              data-name="version-3.8.7.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.7.3">
                version-3.8.7.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.7.2/ext/icu/sqliteicu.h"
              data-name="version-3.8.7.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.7.2">
                version-3.8.7.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.7.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.7.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.7.1">
                version-3.8.7.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.7/ext/icu/sqliteicu.h"
              data-name="version-3.8.7"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.7">
                version-3.8.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.6.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.6.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.6.1">
                version-3.8.6.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.6/ext/icu/sqliteicu.h"
              data-name="version-3.8.6"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.6">
                version-3.8.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.5/ext/icu/sqliteicu.h"
              data-name="version-3.8.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.5">
                version-3.8.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.4.3/ext/icu/sqliteicu.h"
              data-name="version-3.8.4.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.4.3">
                version-3.8.4.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.4.2/ext/icu/sqliteicu.h"
              data-name="version-3.8.4.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.4.2">
                version-3.8.4.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.4.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.4.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.4.1">
                version-3.8.4.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.4/ext/icu/sqliteicu.h"
              data-name="version-3.8.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.4">
                version-3.8.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.3.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.3.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.3.1">
                version-3.8.3.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.3/ext/icu/sqliteicu.h"
              data-name="version-3.8.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.3">
                version-3.8.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.2/ext/icu/sqliteicu.h"
              data-name="version-3.8.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.2">
                version-3.8.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.1">
                version-3.8.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.0.2/ext/icu/sqliteicu.h"
              data-name="version-3.8.0.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.0.2">
                version-3.8.0.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.0.1/ext/icu/sqliteicu.h"
              data-name="version-3.8.0.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.0.1">
                version-3.8.0.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.8.0/ext/icu/sqliteicu.h"
              data-name="version-3.8.0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.8.0">
                version-3.8.0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.17/ext/icu/sqliteicu.h"
              data-name="version-3.7.17"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.17">
                version-3.7.17
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.16.2/ext/icu/sqliteicu.h"
              data-name="version-3.7.16.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.16.2">
                version-3.7.16.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.16.1/ext/icu/sqliteicu.h"
              data-name="version-3.7.16.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.16.1">
                version-3.7.16.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.16/ext/icu/sqliteicu.h"
              data-name="version-3.7.16"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.16">
                version-3.7.16
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.15.2/ext/icu/sqliteicu.h"
              data-name="version-3.7.15.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.15.2">
                version-3.7.15.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.15.1/ext/icu/sqliteicu.h"
              data-name="version-3.7.15.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.15.1">
                version-3.7.15.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.15/ext/icu/sqliteicu.h"
              data-name="version-3.7.15"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.15">
                version-3.7.15
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.14.1/ext/icu/sqliteicu.h"
              data-name="version-3.7.14.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.14.1">
                version-3.7.14.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.14/ext/icu/sqliteicu.h"
              data-name="version-3.7.14"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.14">
                version-3.7.14
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.13/ext/icu/sqliteicu.h"
              data-name="version-3.7.13"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.13">
                version-3.7.13
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.12.1/ext/icu/sqliteicu.h"
              data-name="version-3.7.12.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.12.1">
                version-3.7.12.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.12/ext/icu/sqliteicu.h"
              data-name="version-3.7.12"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.12">
                version-3.7.12
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.11/ext/icu/sqliteicu.h"
              data-name="version-3.7.11"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.11">
                version-3.7.11
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.10/ext/icu/sqliteicu.h"
              data-name="version-3.7.10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.10">
                version-3.7.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.9/ext/icu/sqliteicu.h"
              data-name="version-3.7.9"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.9">
                version-3.7.9
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.8/ext/icu/sqliteicu.h"
              data-name="version-3.7.8"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.8">
                version-3.7.8
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.7.1/ext/icu/sqliteicu.h"
              data-name="version-3.7.7.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.7.1">
                version-3.7.7.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.7/ext/icu/sqliteicu.h"
              data-name="version-3.7.7"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.7">
                version-3.7.7
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.6.3/ext/icu/sqliteicu.h"
              data-name="version-3.7.6.3"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.6.3">
                version-3.7.6.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.6.2/ext/icu/sqliteicu.h"
              data-name="version-3.7.6.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.6.2">
                version-3.7.6.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.6.1/ext/icu/sqliteicu.h"
              data-name="version-3.7.6.1"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.6.1">
                version-3.7.6.1
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.6/ext/icu/sqliteicu.h"
              data-name="version-3.7.6"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.6">
                version-3.7.6
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.5/ext/icu/sqliteicu.h"
              data-name="version-3.7.5"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.5">
                version-3.7.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.4/ext/icu/sqliteicu.h"
              data-name="version-3.7.4"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.4">
                version-3.7.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.7.2/ext/icu/sqliteicu.h"
              data-name="version-3.7.2"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.7.2">
                version-3.7.2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.6.15/ext/icu/sqliteicu.h"
              data-name="version-3.6.15"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.6.15">
                version-3.6.15
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/version-3.6.10/ext/icu/sqliteicu.h"
              data-name="version-3.6.10"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="version-3.6.10">
                version-3.6.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/release/ext/icu/sqliteicu.h"
              data-name="release"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="release">
                release
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/mackyle/sqlite/tree/mountain-lion/ext/icu/sqliteicu.h"
              data-name="mountain-lion"
              data-skip-pjax="true"
              rel="nofollow">
              <svg class="octicon octicon-check select-menu-item-icon" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5L12 5z"/></svg>
              <span class="select-menu-item-text css-truncate-target" title="mountain-lion">
                mountain-lion
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

      <div class="BtnGroup float-right">
        <a href="/mackyle/sqlite/find/master"
              class="js-pjax-capture-input btn btn-sm BtnGroup-item"
              data-pjax
              data-hotkey="t">
          Find file
        </a>
        <clipboard-copy for="blob-path" class="btn btn-sm BtnGroup-item">
          Copy path
        </clipboard-copy>
      </div>
      <div id="blob-path" class="breadcrumb">
        <span class="repo-root js-repo-root"><span class="js-path-segment"><a data-pjax="true" href="/mackyle/sqlite"><span>sqlite</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a data-pjax="true" href="/mackyle/sqlite/tree/master/ext"><span>ext</span></a></span><span class="separator">/</span><span class="js-path-segment"><a data-pjax="true" href="/mackyle/sqlite/tree/master/ext/icu"><span>icu</span></a></span><span class="separator">/</span><strong class="final-path">sqliteicu.h</strong>
      </div>
    </div>


    
  <div class="commit-tease">
      <span class="float-right">
        <a class="commit-tease-sha" href="/mackyle/sqlite/commit/4bead43cb26bdfd918b1dc3c7e57dd1d5b40934d" data-pjax>
          4bead43
        </a>
        <relative-time datetime="2008-09-08T08:08:09Z">Sep 8, 2008</relative-time>
      </span>
      <div>
        <a rel="contributor" data-skip-pjax="true" data-hovercard-type="user" data-hovercard-url="/hovercards?user_id=36086016" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/danielk-1977"><img class="avatar" src="https://avatars1.githubusercontent.com/u/36086016?s=40&amp;v=4" width="20" height="20" alt="@danielk-1977" /></a>
        <a class="user-mention" rel="contributor" data-hovercard-type="user" data-hovercard-url="/hovercards?user_id=36086016" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" href="/danielk-1977">danielk-1977</a>
          <a data-pjax="true" title="Add header file sqliteicu.h to the ICU extension. This is analogous to the rtree.h and fts3.h headers used by other extensions to declare their entry points. Fix for ticket #3361. (CVS 5680)" class="message" href="/mackyle/sqlite/commit/4bead43cb26bdfd918b1dc3c7e57dd1d5b40934d">Add header file sqliteicu.h to the ICU extension. This is analogous t…</a>
      </div>

    <div class="commit-tease-contributors">
      
<details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark float-left mr-2" id="blob_contributors_box">
  <summary class="btn-link" aria-haspopup="dialog"  >
    
    <span><strong>1</strong> contributor</span>
  </summary>
  <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast " aria-label="Users who have contributed to this file">
    <div class="Box-header">
      <button class="Box-btn-octicon btn-octicon float-right" type="button" aria-label="Close dialog" data-close-dialog>
        <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
      </button>
      <h3 class="Box-title">Users who have contributed to this file</h3>
    </div>
    
        <ul class="list-style-none overflow-auto">
            <li class="Box-row">
              <a class="link-gray-dark no-underline" href="/danielk-1977">
                <img class="avatar mr-2" alt="" src="https://avatars1.githubusercontent.com/u/36086016?s=40&amp;v=4" width="20" height="20" />
                danielk-1977
</a>            </li>
        </ul>

  </details-dialog>
</details>
      
    </div>
  </div>



    <div class="file ">
      <div class="file-header">
  <div class="file-actions">

    <div class="BtnGroup">
      <a id="raw-url" class="btn btn-sm BtnGroup-item" href="/mackyle/sqlite/raw/master/ext/icu/sqliteicu.h">Raw</a>
        <a class="btn btn-sm js-update-url-with-hash BtnGroup-item" data-hotkey="b" href="/mackyle/sqlite/blame/master/ext/icu/sqliteicu.h">Blame</a>
      <a rel="nofollow" class="btn btn-sm BtnGroup-item" href="/mackyle/sqlite/commits/master/ext/icu/sqliteicu.h">History</a>
    </div>


        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg class="octicon octicon-pencil" viewBox="0 0 14 16" version="1.1" width="14" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"/></svg>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be signed in to make or propose changes">
          <svg class="octicon octicon-trashcan" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"/></svg>
        </button>
  </div>

  <div class="file-info">
      28 lines (23 sloc)
      <span class="file-info-divider"></span>
    705 Bytes
  </div>
</div>

      

  <div itemprop="text" class="blob-wrapper data type-c ">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">/*</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c">** 2008 May 26</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c">** The author disclaims copyright to this source code.  In place of</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c">** a legal notice, here is a blessing:</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**    May you do good and not evil.</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**    May you find forgiveness for yourself and forgive others.</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**    May you share freely, never taking more than you give.</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line"><span class="pl-c">******************************************************************************</span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line"><span class="pl-c">**</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line"><span class="pl-c">** This header file is used by programs that want to link against the</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line"><span class="pl-c">** ICU extension.  All it does is declare the sqlite3IcuInit() interface.</span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line"><span class="pl-c"><span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>sqlite3.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> __cplusplus</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line"><span class="pl-k">extern</span> <span class="pl-s"><span class="pl-pds">&quot;</span>C<span class="pl-pds">&quot;</span></span> {</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line">#endif  <span class="pl-c"><span class="pl-c">/*</span> __cplusplus <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-k">int</span> <span class="pl-smi">sqlite3IcuInit</span>(sqlite3 *db);</td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> __cplusplus</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line">}  <span class="pl-c"><span class="pl-c">/*</span> extern &quot;C&quot; <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span>  <span class="pl-c"><span class="pl-c">/*</span> __cplusplus <span class="pl-c">*/</span></span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
</table>

  <details class="details-reset details-overlay BlobToolbar position-absolute js-file-line-actions dropdown d-none" aria-hidden="true">
    <summary class="btn-octicon ml-0 px-2 p-0 bg-white border border-gray-dark rounded-1" aria-label="Inline file action toolbar">
      <svg class="octicon octicon-kebab-horizontal" viewBox="0 0 13 16" version="1.1" width="13" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zm5 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3zM13 7.5a1.5 1.5 0 1 1-3 0 1.5 1.5 0 0 1 3 0z"/></svg>
    </summary>
    <details-menu>
      <ul class="BlobToolbar-dropdown dropdown-menu dropdown-menu-se mt-2">
        <li><clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-lines" style="cursor:pointer;" data-original-text="Copy lines">Copy lines</clipboard-copy></li>
        <li><clipboard-copy role="menuitem" class="dropdown-item" id="js-copy-permalink" style="cursor:pointer;" data-original-text="Copy permalink">Copy permalink</clipboard-copy></li>
        <li><a class="dropdown-item js-update-url-with-hash" id="js-view-git-blame" role="menuitem" href="/mackyle/sqlite/blame/841904a56a8d5f9e19873d30604fcdd1f4059c4a/ext/icu/sqliteicu.h">View git blame</a></li>
      </ul>
    </details-menu>
  </details>

  </div>

    </div>

  

  <details class="details-reset details-overlay details-overlay-dark">
    <summary data-hotkey="l" aria-label="Jump to line"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast linejump" aria-label="Jump to line">
      <!-- '"` --><!-- </textarea></xmp> --></option></form><form class="js-jump-to-line-form Box-body d-flex" action="" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" />
        <input class="form-control flex-auto mr-3 linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
        <button type="submit" class="btn" data-close-dialog>Go</button>
</form>    </details-dialog>
  </details>


  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>

    </div>
  </div>

  </div>

        
<div class="footer container-lg px-3" role="contentinfo">
  <div class="position-relative d-flex flex-justify-between pt-6 pb-2 mt-6 f6 text-gray border-top border-gray-light ">
    <ul class="list-style-none d-flex flex-wrap ">
      <li class="mr-3">&copy; 2018 <span title="0.15087s from unicorn-4003047804-cw0jj">GitHub</span>, Inc.</li>
        <li class="mr-3"><a data-ga-click="Footer, go to terms, text:terms" href="https://github.com/site/terms">Terms</a></li>
        <li class="mr-3"><a data-ga-click="Footer, go to privacy, text:privacy" href="https://github.com/site/privacy">Privacy</a></li>
        <li class="mr-3"><a href="https://help.github.com/articles/github-security/" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li class="mr-3"><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
        <li><a data-ga-click="Footer, go to help, text:help" href="https://help.github.com">Help</a></li>
    </ul>

    <a aria-label="Homepage" title="GitHub" class="footer-octicon mr-lg-4" href="https://github.com">
      <svg height="24" class="octicon octicon-mark-github" viewBox="0 0 16 16" version="1.1" width="24" aria-hidden="true"><path fill-rule="evenodd" d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"/></svg>
</a>
   <ul class="list-style-none d-flex flex-wrap ">
        <li class="mr-3"><a data-ga-click="Footer, go to contact, text:contact" href="https://github.com/contact">Contact GitHub</a></li>
        <li class="mr-3"><a href="https://github.com/pricing" data-ga-click="Footer, go to Pricing, text:Pricing">Pricing</a></li>
      <li class="mr-3"><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li class="mr-3"><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
        <li class="mr-3"><a href="https://blog.github.com" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a data-ga-click="Footer, go to about, text:about" href="https://github.com/about">About</a></li>

    </ul>
  </div>
  <div class="d-flex flex-justify-center pb-6">
    <span class="f6 text-gray-light"></span>
  </div>
</div>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
    </button>
    You can’t perform that action at this time.
  </div>


    <script crossorigin="anonymous" integrity="sha512-mal0oz3cFcr4OqIE2eo7Pmax6HtpOKvQfO4vqg9JuCb+iaf4H3KUP9Aryp4oP5mSMgEYUOwgBOAL6MTFaeCZ3w==" type="application/javascript" src="https://assets-cdn.github.com/assets/compat-3c69a4d015c4208bce7a9d5e4e15a914.js"></script>
    <script crossorigin="anonymous" integrity="sha512-MvNlmXbTAwL0N0zMxw8W6vtjWLf0QFvwVzvN8rZIJNdzFy9OJp2d4LQD9WA2rDNcHewz0PB9x/0G0Z9FOuUWgw==" type="application/javascript" src="https://assets-cdn.github.com/assets/frameworks-a2f69f341e3df821fdcb56e335ef9920.js"></script>
    
    <script crossorigin="anonymous" async="async" integrity="sha512-ixxvBZF3eRHUBFtQhqjNyIJRouOkAqo1Glgy607wMwbpAT1Gu/1tGo5impwGiQi9DBWBeaXnVFEXmNTyPZjT3g==" type="application/javascript" src="https://assets-cdn.github.com/assets/github-1f0ca6fc0ad418e21430c85ad0f2544d.js"></script>
    
    
    
  <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner d-none">
    <svg class="octicon octicon-alert" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M8.893 1.5c-.183-.31-.52-.5-.887-.5s-.703.19-.886.5L.138 13.499a.98.98 0 0 0 0 1.001c.193.31.53.501.886.501h13.964c.367 0 .704-.19.877-.5a1.03 1.03 0 0 0 .01-1.002L8.893 1.5zm.133 11.497H6.987v-2.003h2.039v2.003zm0-3.004H6.987V5.987h2.039v4.006z"/></svg>
    <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
    <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
  </div>
  <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
    </button>
  </div>
</div>

  <template id="site-details-dialog">
  <details class="details-reset details-overlay details-overlay-dark lh-default text-gray-dark" open>
    <summary aria-haspopup="dialog" aria-label="Close dialog"></summary>
    <details-dialog class="Box Box--overlay d-flex flex-column anim-fade-in fast">
      <button class="Box-btn-octicon m-0 btn-octicon position-absolute right-0 top-0" type="button" aria-label="Close dialog" data-close-dialog>
        <svg class="octicon octicon-x" viewBox="0 0 12 16" version="1.1" width="12" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48L7.48 8z"/></svg>
      </button>
      <div class="octocat-spinner my-6 js-details-dialog-spinner"></div>
    </details-dialog>
  </details>
</template>

  <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;" tabindex="0">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box box-shadow-large" style="width:360px;">
  </div>
</div>

<div id="hovercard-aria-description" class="sr-only">
  Press h to open a hovercard with more details.
</div>


  </body>
</html>

