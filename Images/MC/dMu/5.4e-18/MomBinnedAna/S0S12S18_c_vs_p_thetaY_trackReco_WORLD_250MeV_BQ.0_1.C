void S0S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7269,-0.400816,3408.028,0.05564844);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[11] = {
   451.7528,
   653.2209,
   880.2011,
   1123.089,
   1371.096,
   1620.209,
   1867.233,
   2115.524,
   2362.844,
   2614.57,
   2788.405};
   Double_t Graph0_fy1205[11] = {
   -0.1669283,
   -0.06577166,
   0.005424004,
   -0.01689218,
   -0.007819777,
   -0.009106764,
   -0.01455287,
   0.008493697,
   -0.0002761587,
   0.003648844,
   0.0004039644};
   Double_t Graph0_fex1205[11] = {
   0.1496284,
   0.1259009,
   0.09125919,
   0.08909967,
   0.09510246,
   0.1053006,
   0.1224209,
   0.1517068,
   0.1946282,
   0.240002,
   0.2929211};
   Double_t Graph0_fey1205[11] = {
   0.1406324,
   0.04723931,
   0.0271225,
   0.02223313,
   0.02040389,
   0.01948954,
   0.01961782,
   0.02079157,
   0.02268856,
   0.02348493,
   0.05541493};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","S0S12S18_",100,217.8937,3022.407);
   Graph_Graph01205->SetMinimum(-0.3551696);
   Graph_Graph01205->SetMaximum(0.01000199);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01205->GetXaxis()->SetRange(0,101);
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
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
