void S0_c_vs_p_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 10:00:13 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.05969055,2850.5,0.05724347);
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
   -0.00122354,
   -7.528002e-05,
   -5.395718e-05,
   0.0002060202,
   0.0001229645,
   8.233038e-05,
   0.0004406904,
   0.000174244,
   -0.0003290415,
   -0.0001991939,
   1.917091e-05,
   -3.319711e-05,
   7.928763e-05,
   -5.296081e-05,
   0.0003436533,
   -0.000650963,
   -7.400927e-05};
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
   0.03897801,
   0.03639914,
   0.0343801,
   0.03258636,
   0.03111588,
   0.02976105,
   0.02858359,
   0.02759656,
   0.02677398,
   0.02595351,
   0.02530774,
   0.02473679,
   0.02440455,
   0.02408222,
   0.02383677,
   0.02364706,
   0.02349805};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","S0",100,530,2570);
   Graph_Graph01045->SetMinimum(-0.04799715);
   Graph_Graph01045->SetMaximum(0.04555007);
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
