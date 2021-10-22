void S0S12S18_full_c_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-329.725,-0.4087636,2725.525,0.02193843);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1387[12] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1387[12] = {
   -0.3080623,
   -0.3078932,
   -0.2782526,
   -0.1736033,
   -0.1428216,
   -0.1177535,
   -0.1060599,
   -0.1180015,
   -0.09666815,
   -0.09373658,
   -0.06342091,
   -0.07625808};
   Double_t Graph0_fex1387[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1387[12] = {
   0.02891764,
   0.02891346,
   0.0286027,
   0.02655664,
   0.02405672,
   0.02178185,
   0.01978683,
   0.01802313,
   0.01645852,
   0.01499443,
   0.01357568,
   0.01218291};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1387,Graph0_fy1387,Graph0_fex1387,Graph0_fey1387);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01387 = new TH1F("Graph_Graph01387","S0S12S18",100,0,2420);
   Graph_Graph01387->SetMinimum(-0.3656934);
   Graph_Graph01387->SetMaximum(-0.02113177);
   Graph_Graph01387->SetDirectory(0);
   Graph_Graph01387->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01387->SetLineColor(ci);
   Graph_Graph01387->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01387->GetXaxis()->SetRange(0,100);
   Graph_Graph01387->GetXaxis()->CenterTitle(true);
   Graph_Graph01387->GetXaxis()->SetLabelFont(42);
   Graph_Graph01387->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01387->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01387->GetXaxis()->SetTitleFont(42);
   Graph_Graph01387->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01387->GetYaxis()->CenterTitle(true);
   Graph_Graph01387->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01387->GetYaxis()->SetLabelFont(42);
   Graph_Graph01387->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01387->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01387->GetYaxis()->SetTitleFont(42);
   Graph_Graph01387->GetZaxis()->SetLabelFont(42);
   Graph_Graph01387->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01387->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01387);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
