void S0S12S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:52:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3996,-0.1579293,3407.527,1.232947);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1207[11] = {
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
   Double_t Graph0_fy1207[11] = {
   0.2293087,
   -0.019728,
   -0.02265842,
   -0.02356349,
   -0.0004312021,
   -0.004872521,
   0.006310506,
   0.009305498,
   0.02275752,
   0.008313875,
   0.01630235};
   Double_t Graph0_fex1207[11] = {
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
   Double_t Graph0_fey1207[11] = {
   0.08865354,
   0.02970183,
   0.01700518,
   0.01396255,
   0.01279954,
   0.0122483,
   0.01232365,
   0.01310394,
   0.01436678,
   0.0148949,
   0.03578131};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1207,Graph0_fy1207,Graph0_fex1207,Graph0_fey1207);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01207 = new TH1F("Graph_Graph01207","S0S12S18_",100,218.1318,3021.996);
   Graph_Graph01207->SetMinimum(-0.01884161);
   Graph_Graph01207->SetMaximum(1.093859);
   Graph_Graph01207->SetDirectory(0);
   Graph_Graph01207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01207->SetLineColor(ci);
   Graph_Graph01207->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01207->GetXaxis()->SetRange(0,101);
   Graph_Graph01207->GetXaxis()->CenterTitle(true);
   Graph_Graph01207->GetXaxis()->SetLabelFont(42);
   Graph_Graph01207->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01207->GetXaxis()->SetTitleFont(42);
   Graph_Graph01207->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01207->GetYaxis()->CenterTitle(true);
   Graph_Graph01207->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01207->GetYaxis()->SetLabelFont(42);
   Graph_Graph01207->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01207->GetYaxis()->SetTitleFont(42);
   Graph_Graph01207->GetZaxis()->SetLabelFont(42);
   Graph_Graph01207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01207);
   
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
