void S0_AEDM_vs_p_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 24 17:34:46 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,0.01690036,2850.5,0.3273129);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1012[17] = {
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
   Double_t Graph0_fy1012[17] = {
   0.1238097,
   0.2168275,
   0.2269321,
   0.1758355,
   0.1794212,
   0.1723778,
   0.2266528,
   0.1318347,
   0.2185134,
   0.1093872,
   0.1689766,
   0.1718953,
   0.1961462,
   0.159734,
   0.1356518,
   0.1871239,
   0.1260062};
   Double_t Graph0_fex1012[17] = {
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
   Double_t Graph0_fey1012[17] = {
   0.0551739,
   0.05155177,
   0.04864536,
   0.04611252,
   0.04398916,
   0.04211734,
   0.04042884,
   0.03901726,
   0.03784934,
   0.03675434,
   0.03568263,
   0.03491284,
   0.03451144,
   0.03410956,
   0.03370104,
   0.0334786,
   0.03318408};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01012 = new TH1F("Graph_Graph01012","S0",100,530,2570);
   Graph_Graph01012->SetMinimum(0.04794162);
   Graph_Graph01012->SetMaximum(0.2962717);
   Graph_Graph01012->SetDirectory(0);
   Graph_Graph01012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01012->SetLineColor(ci);
   Graph_Graph01012->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01012->GetXaxis()->SetRange(0,101);
   Graph_Graph01012->GetXaxis()->CenterTitle(true);
   Graph_Graph01012->GetXaxis()->SetLabelFont(42);
   Graph_Graph01012->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01012->GetXaxis()->SetTitleFont(42);
   Graph_Graph01012->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01012->GetYaxis()->CenterTitle(true);
   Graph_Graph01012->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01012->GetYaxis()->SetLabelFont(42);
   Graph_Graph01012->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01012->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01012->GetYaxis()->SetTitleFont(42);
   Graph_Graph01012->GetZaxis()->SetLabelFont(42);
   Graph_Graph01012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01012);
   
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
