void S0_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 18:50:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.267965,-0.003775921,3234.092,0.003753433);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[11] = {
   451.6815,
   653.2993,
   879.9475,
   1123.075,
   1371.433,
   1620.757,
   1868.017,
   2116.559,
   2363.242,
   2615.312,
   2789.569};
   Double_t Graph0_fy1048[11] = {
   0.0009364923,
   0.000974055,
   0.001168275,
   0.001234969,
   0.002162941,
   0.001770017,
   0.001612054,
   0.002046598,
   0.001415842,
   0.001473731,
   -0.002521029};
   Double_t Graph0_fex1048[11] = {
   0.140651,
   0.1190391,
   0.08681622,
   0.08484467,
   0.09027575,
   0.09965271,
   0.1143202,
   0.1383417,
   0.1730149,
   0.2165107,
   0.2497563};
   Double_t Graph0_fey1048[11] = {
   0.001028753,
   0.000404989,
   0.0002912098,
   0.0002619431,
   0.0003064579,
   0.0002644692,
   0.0003814065,
   0.000451943,
   0.0004961983,
   0.0007550568,
   -0.0022639};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S0_",100,217.713,3023.647);
   Graph_Graph01048->SetMinimum(-0.003022985);
   Graph_Graph01048->SetMaximum(0.003000498);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(5,96);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
