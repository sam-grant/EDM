void S0S12S18_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 15:33:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(486.5144,11.38519,3034.923,25.22397);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1102[12] = {
   192.2001,
   423.448,
   631.326,
   875.8637,
   1123.741,
   1372.866,
   1621.902,
   1870.424,
   2118.826,
   2366.464,
   2613.201,
   2825.527};
   Double_t Graph0_fy1102[12] = {
   29.4492,
   23.72303,
   20.0644,
   17.47609,
   16.35434,
   15.95778,
   16.08185,
   16.62447,
   17.07304,
   17.55051,
   18.17339,
   19.10328};
   Double_t Graph0_fex1102[12] = {
   0.2040654,
   0.04760665,
   0.03659771,
   0.03433945,
   0.03488441,
   0.03624002,
   0.03844086,
   0.0419287,
   0.04784871,
   0.05675261,
   0.07178417,
   0.09115639};
   Double_t Graph0_fey1102[12] = {
   0.124339,
   0.01490691,
   0.007502044,
   0.005998049,
   0.005642947,
   0.005709773,
   0.006110796,
   0.006912605,
   0.008127966,
   0.009969668,
   0.01321521,
   0.02417087};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1102,Graph0_fy1102,Graph0_fex1102,Graph0_fey1102);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01102 = new TH1F("Graph_Graph01102","S0S12S18_",100,0,3088.981);
   Graph_Graph01102->SetMinimum(12.76907);
   Graph_Graph01102->SetMaximum(23.84009);
   Graph_Graph01102->SetDirectory(0);
   Graph_Graph01102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01102->SetLineColor(ci);
   Graph_Graph01102->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01102->GetXaxis()->SetRange(25,90);
   Graph_Graph01102->GetXaxis()->CenterTitle(true);
   Graph_Graph01102->GetXaxis()->SetLabelFont(42);
   Graph_Graph01102->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01102->GetXaxis()->SetTitleFont(42);
   Graph_Graph01102->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01102->GetYaxis()->CenterTitle(true);
   Graph_Graph01102->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01102->GetYaxis()->SetLabelFont(42);
   Graph_Graph01102->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01102->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01102->GetYaxis()->SetTitleFont(42);
   Graph_Graph01102->GetZaxis()->SetLabelFont(42);
   Graph_Graph01102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01102);
   
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
