void S12S18_c_vs_p_sym_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:41 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-0.07646426,7.25,1.032616);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1399[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1399[6] = {
   0.1316671,
   0.3221827,
   0.4547238,
   0.5997433,
   0.6987817,
   0.7911205};
   Double_t Graph0_fex1399[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1399[6] = {
   0.02328466,
   0.02343215,
   0.0245075,
   0.02716249,
   0.03349499,
   0.0566489};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1399,Graph0_fy1399,Graph0_fex1399,Graph0_fey1399);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01399 = new TH1F("Graph_Graph01399","S12S18",100,0.5,6.5);
   Graph_Graph01399->SetMinimum(0.03444379);
   Graph_Graph01399->SetMaximum(0.921708);
   Graph_Graph01399->SetDirectory(0);
   Graph_Graph01399->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01399->SetLineColor(ci);
   Graph_Graph01399->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_Graph01399->GetXaxis()->CenterTitle(true);
   Graph_Graph01399->GetXaxis()->SetLabelFont(42);
   Graph_Graph01399->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01399->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01399->GetXaxis()->SetTitleFont(42);
   Graph_Graph01399->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01399->GetYaxis()->CenterTitle(true);
   Graph_Graph01399->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01399->GetYaxis()->SetLabelFont(42);
   Graph_Graph01399->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01399->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01399->GetYaxis()->SetTitleFont(42);
   Graph_Graph01399->GetZaxis()->SetLabelFont(42);
   Graph_Graph01399->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01399->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01399);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
