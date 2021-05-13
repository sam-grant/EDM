void S12_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:11:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.093114,3712.5,1.656982);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1118[15] = {
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
   Double_t Graph0_fy1118[15] = {
   -0.218066,
   -0.343682,
   0.08320927,
   0.0254433,
   0.2790978,
   0.1875581,
   0.2304762,
   0.2165252,
   0.08871441,
   0.1534228,
   0.1171646,
   0.1465506,
   0.1578037,
   0.0845996,
   -0.1125622};
   Double_t Graph0_fex1118[15] = {
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
   Double_t Graph0_fey1118[15] = {
   1.250032,
   0.2288398,
   0.07925109,
   0.0614858,
   0.05444341,
   0.05021095,
   0.04694251,
   0.04445388,
   0.0428608,
   0.04289035,
   0.04413036,
   0.04673448,
   0.05073185,
   0.05108969,
   0.07186295};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1118,Graph0_fy1118,Graph0_fex1118,Graph0_fey1118);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01118 = new TH1F("Graph_Graph01118","S12",100,0,3300);
   Graph_Graph01118->SetMinimum(-1.718105);
   Graph_Graph01118->SetMaximum(1.281973);
   Graph_Graph01118->SetDirectory(0);
   Graph_Graph01118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01118->SetLineColor(ci);
   Graph_Graph01118->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01118->GetXaxis()->CenterTitle(true);
   Graph_Graph01118->GetXaxis()->SetLabelFont(42);
   Graph_Graph01118->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01118->GetXaxis()->SetTitleFont(42);
   Graph_Graph01118->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01118->GetYaxis()->CenterTitle(true);
   Graph_Graph01118->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01118->GetYaxis()->SetLabelFont(42);
   Graph_Graph01118->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01118->GetYaxis()->SetTitleFont(42);
   Graph_Graph01118->GetZaxis()->SetLabelFont(42);
   Graph_Graph01118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01118);
   
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
