void S12_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.9382,-71.23089,2731.455,14.53394);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[22] = {
   367.1537,
   457.0776,
   570.3106,
   695.1323,
   816.0343,
   938.5372,
   1062.789,
   1188.378,
   1312.629,
   1436,
   1561.908,
   1685.331,
   1810.624,
   1935.143,
   2060.277,
   2185.005,
   2309.081,
   2432.9,
   2559.578,
   2678.745,
   2780.475,
   2889.817};
   Double_t Graph0_fy1014[22] = {
   -2.322428,
   -0.4735382,
   0.09622482,
   -0.05019517,
   0.06065344,
   0.002817895,
   0.07539597,
   0.01229585,
   -0.0373263,
   -0.00114078,
   -0.03150394,
   0.03716419,
   -0.05444756,
   0.01805247,
   -0.03442794,
   -0.02291435,
   0.01667662,
   -0.01103138,
   0.03025038,
   -0.02230616,
   0.1168138,
   -40.50772};
   Double_t Graph0_fex1014[22] = {
   0.2466829,
   0.1188576,
   0.07970566,
   0.05413548,
   0.04310798,
   0.03880465,
   0.03677443,
   0.03566358,
   0.03601932,
   0.03615915,
   0.03887768,
   0.04079902,
   0.04578594,
   0.0500601,
   0.05720224,
   0.06321192,
   0.07280284,
   0.08735633,
   0.1051466,
   0.1208343,
   0.2382505,
   1.967906};
   Double_t Graph0_fey1014[22] = {
   2.562228,
   0.256955,
   0.1243162,
   0.07419927,
   0.0508316,
   0.04157962,
   0.03639939,
   0.03302736,
   0.03087898,
   0.02913559,
   0.02930354,
   0.02822112,
   0.02905006,
   0.02921451,
   0.03050803,
   0.03102217,
   0.03234425,
   0.03483337,
   0.03705545,
   0.04023373,
   0.09946293,
   16.42903};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","S12",100,114.4192,3144.273);
   Graph_Graph01014->SetMinimum(-62.65441);
   Graph_Graph01014->SetMaximum(5.957455);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01014->GetXaxis()->SetRange(21,79);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
