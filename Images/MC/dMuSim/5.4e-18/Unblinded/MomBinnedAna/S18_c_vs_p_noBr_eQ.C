void S18_c_vs_p_noBr_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 29 10:28:02 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.5921832,2850.5,0.06591313);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1117[17] = {
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
   Double_t Graph0_fy1117[17] = {
   -0.414147,
   -0.4065155,
   -0.2531375,
   -0.114081,
   -0.2571727,
   -0.1788067,
   -0.2025667,
   -0.1997702,
   -0.1901112,
   -0.08949458,
   -0.1592247,
   -0.1281271,
   -0.1045911,
   -0.1514791,
   -0.1445441,
   -0.1054875,
   -0.1019119};
   Double_t Graph0_fex1117[17] = {
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
   Double_t Graph0_fey1117[17] = {
   0.06835345,
   0.0640744,
   0.06045524,
   0.05727969,
   0.05482094,
   0.05251824,
   0.05043001,
   0.04871129,
   0.04725747,
   0.04572498,
   0.04483523,
   0.04400931,
   0.04315194,
   0.04298641,
   0.04248217,
   0.04227108,
   0.04191946};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1117,Graph0_fy1117,Graph0_fex1117,Graph0_fey1117);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01117 = new TH1F("Graph_Graph01117","S18",100,530,2570);
   Graph_Graph01117->SetMinimum(-0.5263736);
   Graph_Graph01117->SetMaximum(0.0001034913);
   Graph_Graph01117->SetDirectory(0);
   Graph_Graph01117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01117->SetLineColor(ci);
   Graph_Graph01117->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01117->GetXaxis()->SetRange(0,101);
   Graph_Graph01117->GetXaxis()->CenterTitle(true);
   Graph_Graph01117->GetXaxis()->SetLabelFont(42);
   Graph_Graph01117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01117->GetXaxis()->SetTitleFont(42);
   Graph_Graph01117->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01117->GetYaxis()->CenterTitle(true);
   Graph_Graph01117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01117->GetYaxis()->SetLabelFont(42);
   Graph_Graph01117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01117->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01117->GetYaxis()->SetTitleFont(42);
   Graph_Graph01117->GetZaxis()->SetLabelFont(42);
   Graph_Graph01117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01117);
   
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
