void S12_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-390.0171,-0.1837123,3510.154,1.330904);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[12] = {
   194.7748,
   428.2916,
   630.898,
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541,
   2825.967};
   Double_t Graph0_fy1099[12] = {
   0.5550986,
   0.2162248,
   0.1302225,
   0.1736743,
   0.1450789,
   0.1685137,
   0.1593536,
   0.157711,
   0.1060153,
   0.09194423,
   0.115199,
   0.06056103};
   Double_t Graph0_fex1099[12] = {
   0.3340551,
   0.05951737,
   0.04633076,
   0.04453331,
   0.04522431,
   0.04670874,
   0.04919543,
   0.05334962,
   0.06010925,
   0.07061149,
   0.0892903,
   0.1136539};
   Double_t Graph0_fey1099[12] = {
   0.5450199,
   0.0538818,
   0.02569005,
   0.02014997,
   0.01730315,
   0.01532402,
   0.01393441,
   0.01310317,
   0.01273158,
   0.01276168,
   0.01347304,
   0.01948068};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S12_",100,0,3089.244);
   Graph_Graph01099->SetMinimum(-0.03225066);
   Graph_Graph01099->SetMaximum(1.179442);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01099->GetXaxis()->SetRange(1,101);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
