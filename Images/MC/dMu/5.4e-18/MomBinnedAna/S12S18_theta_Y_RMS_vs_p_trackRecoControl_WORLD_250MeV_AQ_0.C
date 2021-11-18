void S12S18_theta_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.4652,-2.27101,2744.171,40.45755);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[11] = {
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
   Double_t Graph0_fy1058[11] = {
   33.19221,
   26.28558,
   21.30295,
   18.00766,
   15.3501,
   12.981,
   10.92249,
   10.54298,
   8.232291,
   6.204089,
   4.890049};
   Double_t Graph0_fex1058[11] = {
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
   Double_t Graph0_fey1058[11] = {
   0.1439119,
   0.04103896,
   0.02125956,
   0.01636307,
   0.01620665,
   0.02022758,
   0.04047979,
   0.1631875,
   0.0655507,
   0.02592022,
   0.03963226};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","S12S18_",100,218.877,3024.76);
   Graph_Graph01058->SetMinimum(2.001846);
   Graph_Graph01058->SetMaximum(36.18469);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01058->GetXaxis()->SetRange(19,82);
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
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
