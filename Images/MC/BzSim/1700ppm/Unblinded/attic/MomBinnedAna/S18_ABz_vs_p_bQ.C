void S18_ABz_vs_p_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:57:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.09148906,2850.5,0.3867813);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1175[17] = {
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
   Double_t Graph0_fy1175[17] = {
   0.1530054,
   0.08525928,
   0.2021925,
   0.1010527,
   0.2446654,
   0.108162,
   0.191687,
   0.1341285,
   0.1134059,
   0.1409975,
   0.1759804,
   0.2416579,
   0.04634424,
   0.1145622,
   0.218411,
   0.2233183,
   0.1437748};
   Double_t Graph0_fex1175[17] = {
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
   Double_t Graph0_fey1175[17] = {
   0.09278831,
   0.0792153,
   0.07005167,
   0.06496012,
   0.06240415,
   0.05975557,
   0.05853225,
   0.05714993,
   0.05614186,
   0.05528198,
   0.05591361,
   0.05628893,
   0.05812158,
   0.05904547,
   0.06069136,
   0.06433755,
   0.06672602};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1175,Graph0_fy1175,Graph0_fex1175,Graph0_fey1175);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01175 = new TH1F("Graph_Graph01175","S18",100,530,2570);
   Graph_Graph01175->SetMinimum(-0.04366203);
   Graph_Graph01175->SetMaximum(0.3389542);
   Graph_Graph01175->SetDirectory(0);
   Graph_Graph01175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01175->SetLineColor(ci);
   Graph_Graph01175->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01175->GetXaxis()->SetRange(0,101);
   Graph_Graph01175->GetXaxis()->CenterTitle(true);
   Graph_Graph01175->GetXaxis()->SetLabelFont(42);
   Graph_Graph01175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01175->GetXaxis()->SetTitleFont(42);
   Graph_Graph01175->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01175->GetYaxis()->CenterTitle(true);
   Graph_Graph01175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01175->GetYaxis()->SetLabelFont(42);
   Graph_Graph01175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01175->GetYaxis()->SetTitleFont(42);
   Graph_Graph01175->GetZaxis()->SetLabelFont(42);
   Graph_Graph01175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01175);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
