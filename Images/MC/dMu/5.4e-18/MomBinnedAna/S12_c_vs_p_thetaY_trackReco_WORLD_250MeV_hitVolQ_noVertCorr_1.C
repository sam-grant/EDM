void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4108,-3.27782,3405.697,2.669756);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[12] = {
   184.8965,
   431.0316,
   629.4488,
   873.9547,
   1122.609,
   1372.168,
   1620.962,
   1869.294,
   2117.218,
   2364.211,
   2614.992,
   2824.915};
   Double_t Graph0_fy1098[12] = {
   1.373612,
   -2.257076,
   -0.8541029,
   -0.4593929,
   -0.2887314,
   -0.2171422,
   -0.1903409,
   -0.1505947,
   -0.1423435,
   -0.1389634,
   -0.0794391,
   0.001863362};
   Double_t Graph0_fex1098[12] = {
   0.2750972,
   0.04276677,
   0.03714718,
   0.03650189,
   0.03823971,
   0.04061549,
   0.04395212,
   0.0493449,
   0.05777407,
   0.07235673,
   0.09250066,
   0.1113114};
   Double_t Graph0_fey1098[12] = {
   0.3048813,
   0.02948151,
   0.01468773,
   0.01176895,
   0.01036989,
   0.00938188,
   0.00870671,
   0.00843918,
   0.008541689,
   0.009202478,
   0.009705659,
   0.01281158};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","S12_",100,0,3089.067);
   Graph_Graph01098->SetMinimum(-2.683062);
   Graph_Graph01098->SetMaximum(2.074998);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(1,98);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
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
