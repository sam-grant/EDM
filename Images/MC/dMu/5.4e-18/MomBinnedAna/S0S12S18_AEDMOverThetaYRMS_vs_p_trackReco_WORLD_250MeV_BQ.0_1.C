void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7269,-0.01581849,3408.028,0.02489234);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1219[11] = {
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
   Double_t Graph0_fy1219[11] = {
   -0.002685701,
   -0.002142955,
   -0.005820603,
   -0.006680419,
   -0.009620455,
   -0.008197823,
   -0.009991643,
   -0.01066109,
   -0.008525804,
   -0.01479813,
   -0.005567256};
   Double_t Graph0_fex1219[11] = {
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
   Double_t Graph0_fey1219[11] = {
   -0.00637134,
   -0.002580016,
   -0.001802952,
   -0.001748544,
   -0.001868407,
   -0.002071071,
   -0.002411693,
   -0.002996272,
   -0.003849849,
   -0.004840741,
   -0.0137737};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1219,Graph0_fy1219,Graph0_fex1219,Graph0_fey1219);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01219 = new TH1F("Graph_Graph01219","S0S12S18_",100,217.8937,3022.407);
   Graph_Graph01219->SetMinimum(-0.0117474);
   Graph_Graph01219->SetMaximum(0.02082126);
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
