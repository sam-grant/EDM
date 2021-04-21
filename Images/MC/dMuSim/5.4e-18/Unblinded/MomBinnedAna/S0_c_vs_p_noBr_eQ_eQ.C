void S0_c_vs_p_noBr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:23:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.369004,2850.5,0.2678954);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t Graph0_fy1045[17] = {
   -0.1947585,
   -0.122606,
   0.008280527,
   -0.06924164,
   0.09806001,
   0.01706155,
   0.08453268,
   0.04232448,
   -0.05493873,
   -0.02426087,
   -0.08428002,
   -0.000858606,
   -0.01041514,
   0.1197561,
   0.007359374,
   0.07933916,
   0.06842092};
   Double_t Graph0_fex1045[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1045[17] = {
   0.06809554,
   0.06333011,
   0.05991778,
   0.05691713,
   0.05429567,
   0.05198314,
   0.05000878,
   0.04832578,
   0.04670064,
   0.04530708,
   0.04407926,
   0.04347699,
   0.04270511,
   0.04198944,
   0.04167553,
   0.04148641,
   0.04120622};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S0",100,530,2570);
   Graph_Graph01045->SetMinimum(-0.305314);
   Graph_Graph01045->SetMaximum(0.2042055);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01045->GetXaxis()->SetRange(0,101);
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
