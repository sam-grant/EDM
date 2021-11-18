void S12S18_Ag2_vs_p_trackRecoControl_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:31:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.4652,-0.4162588,2744.171,0.9321265);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[11] = {
   452.9018,
   656.5648,
   884.8504,
   1123.532,
   1363.582,
   1601.356,
   1825.111,
   2101.291,
   2411.99,
   2637.273,
   2790.578};
   Double_t Graph0_fy1057[11] = {
   0.3207341,
   0.1091411,
   -0.1077649,
   -0.02352482,
   0.01629184,
   0.05146771,
   -0.08551824,
   0.3915444,
   -0.05769184,
   -0.02727302,
   -0.08638037};
   Double_t Graph0_fex1057[11] = {
   0.2012648,
   0.1496433,
   0.1002818,
   0.09219183,
   0.1062442,
   0.1510616,
   0.3149928,
   1.812684,
   0.7390367,
   0.4036753,
   0.3580082};
   Double_t Graph0_fey1057[11] = {
   0.2877213,
   0.08193959,
   0.04243327,
   0.03266674,
   0.03235469,
   0.04046064,
   0.08065363,
   0.3158512,
   0.1338361,
   0.05607433,
   0.08995728};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","S12S18_",100,218.877,3024.76);
   Graph_Graph01057->SetMinimum(-0.2814203);
   Graph_Graph01057->SetMaximum(0.7972879);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01057->GetXaxis()->SetRange(19,82);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
