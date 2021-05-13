void S18_AEDM_vs_p_noBr_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:28:02 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.1734525,2850.5,0.5101006);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1118[17] = {
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
   Double_t Graph0_fy1118[17] = {
   0.03704171,
   0.1906142,
   0.1568019,
   0.1237512,
   0.189495,
   0.3219559,
   0.3110487,
   0.2096847,
   0.2682592,
   0.1749622,
   0.1363175,
   0.1868481,
   0.09647996,
   0.1201972,
   0.105259,
   0.09215394,
   0.07842604};
   Double_t Graph0_fex1118[17] = {
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
   Double_t Graph0_fey1118[17] = {
   0.09656867,
   0.09069006,
   0.0853687,
   0.0806948,
   0.07731015,
   0.0742192,
   0.07107921,
   0.06870869,
   0.06671646,
   0.06464951,
   0.06330383,
   0.06221738,
   0.06098631,
   0.06077689,
   0.06004297,
   0.05973962,
   0.0593651};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1118,Graph0_fy1118,Graph0_fex1118,Graph0_fey1118);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01118 = new TH1F("Graph_Graph01118","S18",100,530,2570);
   Graph_Graph01118->SetMinimum(-0.1050972);
   Graph_Graph01118->SetMaximum(0.4417453);
   Graph_Graph01118->SetDirectory(0);
   Graph_Graph01118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01118->SetLineColor(ci);
   Graph_Graph01118->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01118->GetXaxis()->SetRange(0,101);
   Graph_Graph01118->GetXaxis()->CenterTitle(true);
   Graph_Graph01118->GetXaxis()->SetLabelFont(42);
   Graph_Graph01118->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01118->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01118->GetXaxis()->SetTitleFont(42);
   Graph_Graph01118->GetYaxis()->SetTitle("A_{EDM} [mrad]");
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
