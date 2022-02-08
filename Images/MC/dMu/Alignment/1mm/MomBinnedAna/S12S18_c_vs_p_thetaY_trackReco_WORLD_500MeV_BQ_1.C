void S12S18_c_vs_p_thetaY_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 15:00:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.3365,-2.395561,3209.969,18.78276);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1128[6] = {
   451.6445,
   805.5218,
   1238.379,
   1723.774,
   2205.558,
   2631.868};
   Double_t Graph0_fy1128[6] = {
   5.215662,
   -0.3472388,
   -0.3397347,
   -0.2207144,
   -0.1372988,
   -0.1085546};
   Double_t Graph0_fex1128[6] = {
   0.1241025,
   0.1122655,
   0.1089838,
   0.1339741,
   0.2044962,
   0.244827};
   Double_t Graph0_fey1128[6] = {
   0.1166199,
   0.01999604,
   0.01282728,
   0.01191567,
   0.01371309,
   0.01942851};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1128,Graph0_fy1128,Graph0_fex1128,Graph0_fey1128);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01128 = new TH1F("Graph_Graph01128","S12S18_",100,233.4612,2850.172);
   Graph_Graph01128->SetMinimum(-0.2777289);
   Graph_Graph01128->SetMaximum(16.66492);
   Graph_Graph01128->SetDirectory(0);
   Graph_Graph01128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01128->SetLineColor(ci);
   Graph_Graph01128->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01128->GetXaxis()->SetRange(0,101);
   Graph_Graph01128->GetXaxis()->CenterTitle(true);
   Graph_Graph01128->GetXaxis()->SetLabelFont(42);
   Graph_Graph01128->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01128->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01128->GetXaxis()->SetTitleFont(42);
   Graph_Graph01128->GetYaxis()->SetTitle("c [mrad] / 500 MeV");
   Graph_Graph01128->GetYaxis()->CenterTitle(true);
   Graph_Graph01128->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01128->GetYaxis()->SetLabelFont(42);
   Graph_Graph01128->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01128->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01128->GetYaxis()->SetTitleFont(42);
   Graph_Graph01128->GetZaxis()->SetLabelFont(42);
   Graph_Graph01128->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01128);
   
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
