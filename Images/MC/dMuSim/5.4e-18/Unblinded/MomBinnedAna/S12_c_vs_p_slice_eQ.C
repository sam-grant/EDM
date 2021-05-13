void S12_c_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.740767,3378.375,0.4861649);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[15] = {
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
   Double_t Graph0_fy1067[15] = {
   -0.9229315,
   -2.09631,
   -1.443148,
   -0.563141,
   -0.4064294,
   -0.2465827,
   -0.2175602,
   -0.195859,
   -0.1875369,
   -0.149592,
   -0.117665,
   -0.108809,
   -0.1064658,
   -0.1176701,
   -0.07691742};
   Double_t Graph0_fex1067[15] = {
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
   Double_t Graph0_fey1067[15] = {
   0.7063315,
   0.1066347,
   0.03831592,
   0.02867379,
   0.02509524,
   0.02266273,
   0.02079479,
   0.01930604,
   0.01825716,
   0.01750386,
   0.01711338,
   0.01691912,
   0.01709212,
   0.0176575,
   0.02526037};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S12",100,0,3300);
   Graph_Graph01067->SetMinimum(-2.418074);
   Graph_Graph01067->SetMaximum(0.1634717);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01067->GetXaxis()->SetRange(1,91);
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
