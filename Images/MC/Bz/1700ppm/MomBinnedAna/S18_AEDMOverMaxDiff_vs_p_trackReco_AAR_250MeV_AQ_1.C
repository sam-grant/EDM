void S18_AEDMOverMaxDiff_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:33:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.1523,-0.001198692,3334.476,0.002868748);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[12] = {
   172.9297,
   432.8647,
   628.4978,
   873.0147,
   1121.804,
   1371.324,
   1620.193,
   1868.223,
   2115.655,
   2363.493,
   2614.65,
   2825.258};
   Double_t Graph0_fy1076[12] = {
   -0.0001097081,
   0.0001492889,
   -4.75439e-05,
   4.010566e-05,
   -4.461115e-05,
   5.934045e-05,
   -0.000313319,
   0.0004697318,
   -0.0002328624,
   6.851379e-05,
   -0.0001597395,
   0.000835028};
   Double_t Graph0_fex1076[12] = {
   1.275515,
   0.1209802,
   0.1087106,
   0.1092648,
   0.1173546,
   0.1272627,
   0.1404312,
   0.1620366,
   0.195341,
   0.2531342,
   0.3251753,
   0.397035};
   Double_t Graph0_fey1076[12] = {
   -0.002769084,
   0.0001610758,
   -8.712667e-05,
   8.083075e-05,
   -0.0001124759,
   0.0001188528,
   -0.0001918721,
   0.0003830352,
   -0.0003312616,
   7.826966e-05,
   -0.0004538331,
   0.001355814};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18_",100,0,3091.056);
   Graph_Graph01076->SetMinimum(-0.0007919482);
   Graph_Graph01076->SetMaximum(0.002462004);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(2,96);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
