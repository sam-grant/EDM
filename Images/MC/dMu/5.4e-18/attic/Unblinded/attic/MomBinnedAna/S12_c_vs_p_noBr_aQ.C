void S12_c_vs_p_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:31 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-12.07078,3378.375,4.707388);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
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
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t Graph0_fy1133[30] = {
   -8.661905,
   -0.06456023,
   1.640837,
   -1.68877,
   -1.64385,
   -0.9673404,
   -0.6067335,
   -0.5239706,
   -0.4517434,
   -0.3620652,
   -0.2997034,
   -0.2419073,
   -0.1865384,
   -0.1859197,
   -0.1963852,
   -0.1435744,
   -0.163151,
   -0.1026417,
   -0.1538338,
   -0.1354305,
   -0.09301577,
   -0.1094201,
   -0.0884282,
   -0.1273372,
   -0.0848689,
   -0.08114769,
   -0.09892257,
   -0.1209312,
   -0.08340383,
   0.1189875};
   Double_t Graph0_fex1133[30] = {
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
   Double_t Graph0_fey1133[30] = {
   0.6125172,
   0.5911401,
   0.2701888,
   0.09580056,
   0.05411219,
   0.04139488,
   0.0360567,
   0.03292415,
   0.03048191,
   0.02850133,
   0.02689582,
   0.02552996,
   0.02427702,
   0.02315152,
   0.02218314,
   0.02135705,
   0.0206731,
   0.02014173,
   0.01964286,
   0.01932735,
   0.0190605,
   0.01895936,
   0.01891973,
   0.01898074,
   0.01912178,
   0.01941108,
   0.01983089,
   0.02057137,
   0.02358848,
   0.05466497};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","S12",100,0,3300);
   Graph_Graph01133->SetMinimum(-10.39297);
   Graph_Graph01133->SetMaximum(3.029571);
   Graph_Graph01133->SetDirectory(0);
   Graph_Graph01133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01133->SetLineColor(ci);
   Graph_Graph01133->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01133->GetXaxis()->SetRange(1,91);
   Graph_Graph01133->GetXaxis()->CenterTitle(true);
   Graph_Graph01133->GetXaxis()->SetLabelFont(42);
   Graph_Graph01133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01133->GetXaxis()->SetTitleFont(42);
   Graph_Graph01133->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01133->GetYaxis()->CenterTitle(true);
   Graph_Graph01133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01133->GetYaxis()->SetLabelFont(42);
   Graph_Graph01133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01133->GetYaxis()->SetTitleFont(42);
   Graph_Graph01133->GetZaxis()->SetLabelFont(42);
   Graph_Graph01133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01133);
   
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
