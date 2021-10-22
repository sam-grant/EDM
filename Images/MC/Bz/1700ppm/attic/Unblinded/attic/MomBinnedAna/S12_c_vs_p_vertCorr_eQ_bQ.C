void S12_c_vs_p_vertCorr_eQ_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:03:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,-0.4025632,1712,-0.01008469);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t Graph0_fy1067[8] = {
   -0.1412869,
   -0.2809857,
   -0.159308,
   -0.1921724,
   -0.1251079,
   -0.2491014,
   -0.1986826,
   -0.1572668};
   Double_t Graph0_fex1067[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1067[8] = {
   0.06578909,
   0.05616439,
   0.04993484,
   0.0464767,
   0.04415364,
   0.0424681,
   0.04099655,
   0.04026917};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S12",100,620,1580);
   Graph_Graph01067->SetMinimum(-0.3633154);
   Graph_Graph01067->SetMaximum(-0.04933254);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01067->GetXaxis()->SetRange(0,101);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
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
