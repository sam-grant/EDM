void S12_c_vs_p_gQ_coarse()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 22:24:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(123,-0.7398087,2877,0.07816628);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[9] = {
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300};
   Double_t Graph0_fy1073[9] = {
   -0.5537235,
   -0.3666184,
   -0.3081029,
   -0.2343635,
   -0.2194544,
   -0.1436439,
   -0.1457829,
   -0.0804652,
   -0.0850613};
   Double_t Graph0_fex1073[9] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1073[9] = {
   0.04975604,
   0.03189787,
   0.02883594,
   0.02642465,
   0.02469412,
   0.02328249,
   0.02258839,
   0.02230231,
   0.02234026};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S12",100,420,2580);
   Graph_Graph01073->SetMinimum(-0.6580112);
   Graph_Graph01073->SetMaximum(-0.003631221);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01073->GetXaxis()->SetRange(0,101);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
