void S12S18_AEDMOverMaxDiff_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:24:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-0.2833159,2727,0.07375761);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1042[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1042[22] = {
   0.007225116,
   -0.0003122123,
   -0.0001840636,
   5.955894e-05,
   -0.0002036121,
   -0.0001167111,
   -0.0001111754,
   -1.964886e-05,
   -7.183403e-05,
   -7.369311e-06,
   1.080612e-07,
   -7.723069e-05,
   -0.0002182797,
   -0.0001943353,
   -0.0001679528,
   0.000161577,
   -0.0004159159,
   -0.0003155282,
   -0.0003979641,
   0.0007376017,
   0.000138126,
   -0.2238036};
   Double_t Graph0_fex1042[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1042[22] = {
   0.007020237,
   -0.0003872755,
   -0.0001998557,
   0.0001383553,
   -9.992547e-05,
   -7.440328e-05,
   -7.619375e-05,
   -7.264152e-05,
   -8.000107e-05,
   -7.658536e-05,
   8.025543e-05,
   -9.725276e-05,
   -0.0001042777,
   -0.0001414069,
   -0.0001511947,
   0.0001819431,
   -0.0002286972,
   -0.0002684709,
   -0.0003024107,
   0.0003639078,
   0.001197899,
   -0.03614422};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","S12S18",100,49.5,3199.5);
   Graph_Graph01042->SetMinimum(-0.2476085);
   Graph_Graph01042->SetMaximum(0.03805025);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01042->GetXaxis()->SetRange(23,78);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01042->GetYaxis()->CenterTitle(true);
   Graph_Graph01042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01042->GetYaxis()->SetLabelFont(42);
   Graph_Graph01042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01042->GetYaxis()->SetTitleFont(42);
   Graph_Graph01042->GetZaxis()->SetLabelFont(42);
   Graph_Graph01042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01042);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
