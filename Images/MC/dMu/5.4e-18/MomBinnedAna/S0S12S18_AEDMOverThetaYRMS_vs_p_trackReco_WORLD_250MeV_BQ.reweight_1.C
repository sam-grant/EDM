void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:52:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3996,-0.02913144,3407.527,0.02373405);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1219[11] = {
   451.8592,
   653.3031,
   880.3064,
   1123.077,
   1371.079,
   1620.197,
   1866.983,
   2115.419,
   2362.996,
   2613.822,
   2788.198};
   Double_t Graph0_fy1219[11] = {
   0.0006399249,
   0.00546689,
   0.005634687,
   0.00664526,
   0.009085032,
   0.0115126,
   0.01125867,
   0.01151598,
   0.008557783,
   0.01547836,
   0.00245158};
   Double_t Graph0_fex1219[11] = {
   0.07208649,
   0.0609111,
   0.04412965,
   0.04310089,
   0.04602564,
   0.05089827,
   0.05933135,
   0.07372534,
   0.09524054,
   0.1166558,
   0.1421259};
   Double_t Graph0_fey1219[11] = {
   0.003082512,
   0.001248708,
   0.0008723149,
   0.0008466701,
   0.0009046116,
   0.001000612,
   0.001170413,
   0.001453283,
   0.001880129,
   0.002366806,
   0.006792844};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1219,Graph0_fy1219,Graph0_fex1219,Graph0_fey1219);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01219 = new TH1F("Graph_Graph01219","S0S12S18_",100,218.1318,3021.996);
   Graph_Graph01219->SetMinimum(-0.02384489);
   Graph_Graph01219->SetMaximum(0.0184475);
   Graph_Graph01219->SetDirectory(0);
   Graph_Graph01219->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01219->SetLineColor(ci);
   Graph_Graph01219->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01219->GetXaxis()->SetRange(0,101);
   Graph_Graph01219->GetXaxis()->CenterTitle(true);
   Graph_Graph01219->GetXaxis()->SetLabelFont(42);
   Graph_Graph01219->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01219->GetXaxis()->SetTitleFont(42);
   Graph_Graph01219->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01219->GetYaxis()->CenterTitle(true);
   Graph_Graph01219->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01219->GetYaxis()->SetLabelFont(42);
   Graph_Graph01219->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01219->GetYaxis()->SetTitleFont(42);
   Graph_Graph01219->GetZaxis()->SetLabelFont(42);
   Graph_Graph01219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01219);
   
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
