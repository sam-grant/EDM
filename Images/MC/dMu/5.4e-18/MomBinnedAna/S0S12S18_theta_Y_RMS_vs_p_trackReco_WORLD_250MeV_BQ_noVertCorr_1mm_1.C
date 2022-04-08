void S0S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.2205,-1.642772,3376.373,37.7653);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1211[11] = {
   451.6658,
   653.2317,
   880.1526,
   1123.144,
   1371.132,
   1620.121,
   1867.161,
   2115.314,
   2363.027,
   2614.442,
   2788.45};
   Double_t Graph0_fy1211[11] = {
   31.14393,
   25.79447,
   21.238,
   17.97524,
   15.4364,
   13.27307,
   11.39569,
   9.628658,
   7.947539,
   6.237217,
   4.944003};
   Double_t Graph0_fex1211[11] = {
   0.0800574,
   0.06779092,
   0.04920089,
   0.04812513,
   0.05142385,
   0.05697761,
   0.06639479,
   0.08259982,
   0.1067252,
   0.1309615,
   0.1608216};
   Double_t Graph0_fey1211[11] = {
   0.05335384,
   0.01794036,
   0.01032571,
   0.008492692,
   0.007800611,
   0.007441893,
   0.007455274,
   0.007834373,
   0.008375069,
   0.008273758,
   0.01876339};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1211,Graph0_fy1211,Graph0_fex1211,Graph0_fey1211);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01211 = new TH1F("Graph_Graph01211","S0S12S18_",100,217.8832,3022.314);
   Graph_Graph01211->SetMinimum(2.298035);
   Graph_Graph01211->SetMaximum(33.82449);
   Graph_Graph01211->SetDirectory(0);
   Graph_Graph01211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01211->SetLineColor(ci);
   Graph_Graph01211->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01211->GetXaxis()->SetRange(0,100);
   Graph_Graph01211->GetXaxis()->CenterTitle(true);
   Graph_Graph01211->GetXaxis()->SetLabelFont(42);
   Graph_Graph01211->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01211->GetXaxis()->SetTitleFont(42);
   Graph_Graph01211->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01211->GetYaxis()->CenterTitle(true);
   Graph_Graph01211->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01211->GetYaxis()->SetLabelFont(42);
   Graph_Graph01211->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01211->GetYaxis()->SetTitleFont(42);
   Graph_Graph01211->GetZaxis()->SetLabelFont(42);
   Graph_Graph01211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01211);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
