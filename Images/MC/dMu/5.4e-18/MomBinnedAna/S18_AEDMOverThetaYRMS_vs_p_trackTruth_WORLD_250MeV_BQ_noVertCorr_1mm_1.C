void S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.8222,-0.01882493,3380.472,0.03653633);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1145[11] = {
   451.9486,
   653.1773,
   880.5114,
   1122.959,
   1370.855,
   1619.967,
   1866.721,
   2114.459,
   2363.098,
   2613.327,
   2791.578};
   Double_t Graph0_fy1145[11] = {
   -0.009598051,
   0.007526385,
   0.00495424,
   0.005465664,
   0.008850964,
   0.009924846,
   0.008104872,
   0.006355174,
   0.006490772,
   0.02219737,
   -0.0005548082};
   Double_t Graph0_fex1145[11] = {
   0.1471548,
   0.1247107,
   0.09035711,
   0.0884312,
   0.09508117,
   0.1056574,
   0.1244836,
   0.1565771,
   0.2067098,
   0.2497165,
   0.3518313};
   Double_t Graph0_fey1145[11] = {
   -0.006270765,
   0.002554328,
   0.001787126,
   0.001736006,
   0.001868502,
   0.002077729,
   0.002455739,
   0.00309343,
   0.004070798,
   0.005112084,
   -0.01455946};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1145,Graph0_fy1145,Graph0_fex1145,Graph0_fey1145);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01145 = new TH1F("Graph_Graph01145","S18_",100,217.7887,3025.942);
   Graph_Graph01145->SetMinimum(-0.0132888);
   Graph_Graph01145->SetMaximum(0.03100021);
   Graph_Graph01145->SetDirectory(0);
   Graph_Graph01145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01145->SetLineColor(ci);
   Graph_Graph01145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01145->GetXaxis()->SetRange(0,100);
   Graph_Graph01145->GetXaxis()->CenterTitle(true);
   Graph_Graph01145->GetXaxis()->SetLabelFont(42);
   Graph_Graph01145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01145->GetXaxis()->SetTitleFont(42);
   Graph_Graph01145->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01145->GetYaxis()->CenterTitle(true);
   Graph_Graph01145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01145->GetYaxis()->SetLabelFont(42);
   Graph_Graph01145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01145->GetYaxis()->SetTitleFont(42);
   Graph_Graph01145->GetZaxis()->SetLabelFont(42);
   Graph_Graph01145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01145);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
