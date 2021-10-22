void S12S18_ABz_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 18:46:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.996883,3378.375,0.6758411);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1142[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1142[15] = {
   -0.7357778,
   -0.3041249,
   0.04049864,
   0.09000539,
   0.2051021,
   0.1507064,
   0.2029675,
   0.1641991,
   0.1427805,
   0.1422881,
   0.09422409,
   0.1300121,
   0.09699587,
   0.09448374,
   0.0008638224};
   Double_t Graph0_fex1142[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1142[15] = {
   0.8156509,
   0.1092249,
   0.03867673,
   0.02898583,
   0.02528503,
   0.02284702,
   0.02094304,
   0.01956436,
   0.0184852,
   0.01794963,
   0.01771614,
   0.01783201,
   0.01844702,
   0.02006403,
   0.03102243};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1142,Graph0_fy1142,Graph0_fex1142,Graph0_fey1142);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01142 = new TH1F("Graph_Graph01142","S12S18",100,0,3300);
   Graph_Graph01142->SetMinimum(-1.72961);
   Graph_Graph01142->SetMaximum(0.4085687);
   Graph_Graph01142->SetDirectory(0);
   Graph_Graph01142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01142->SetLineColor(ci);
   Graph_Graph01142->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01142->GetXaxis()->SetRange(1,91);
   Graph_Graph01142->GetXaxis()->CenterTitle(true);
   Graph_Graph01142->GetXaxis()->SetLabelFont(42);
   Graph_Graph01142->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01142->GetXaxis()->SetTitleFont(42);
   Graph_Graph01142->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01142->GetYaxis()->CenterTitle(true);
   Graph_Graph01142->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01142->GetYaxis()->SetLabelFont(42);
   Graph_Graph01142->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01142->GetYaxis()->SetTitleFont(42);
   Graph_Graph01142->GetZaxis()->SetLabelFont(42);
   Graph_Graph01142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01142);
   
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
