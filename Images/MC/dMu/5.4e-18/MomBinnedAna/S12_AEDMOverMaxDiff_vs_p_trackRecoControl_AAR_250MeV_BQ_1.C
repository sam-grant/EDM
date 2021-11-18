void S12_AEDMOverMaxDiff_vs_p_trackRecoControl_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:31:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.337,-0.007669742,2744.492,0.02317781);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1044[11] = {
   452.8467,
   656.3467,
   884.5547,
   1123.532,
   1363.534,
   1601.532,
   1825.246,
   2100.364,
   2414.133,
   2638.074,
   2790.765};
   Double_t Graph0_fy1044[11] = {
   -0.0002257007,
   0.001122163,
   0.0004257757,
   0.0003228904,
   0.0003443809,
   0.001753609,
   0.002399334,
   0.01007698,
   0.001738742,
   -3.554947e-05,
   0.01177112};
   Double_t Graph0_fex1044[11] = {
   0.2837759,
   0.2116908,
   0.1417707,
   0.1304273,
   0.14985,
   0.2133281,
   0.4402353,
   2.489685,
   1.044304,
   0.569552,
   0.5003926};
   Double_t Graph0_fey1044[11] = {
   -0.001590458,
   0.0004724714,
   0.0003311425,
   0.0002643021,
   0.0003197461,
   0.0005053383,
   0.001714021,
   0.007959567,
   0.004267226,
   -0.002125014,
   0.004420306};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1044,Graph0_fy1044,Graph0_fex1044,Graph0_fey1044);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01044 = new TH1F("Graph_Graph01044","S12_",100,218.6927,3025.136);
   Graph_Graph01044->SetMinimum(-0.004584987);
   Graph_Graph01044->SetMaximum(0.02009305);
   Graph_Graph01044->SetDirectory(0);
   Graph_Graph01044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01044->SetLineColor(ci);
   Graph_Graph01044->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01044->GetXaxis()->SetRange(19,82);
   Graph_Graph01044->GetXaxis()->CenterTitle(true);
   Graph_Graph01044->GetXaxis()->SetLabelFont(42);
   Graph_Graph01044->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01044->GetXaxis()->SetTitleFont(42);
   Graph_Graph01044->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01044->GetYaxis()->CenterTitle(true);
   Graph_Graph01044->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01044->GetYaxis()->SetLabelFont(42);
   Graph_Graph01044->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01044->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01044->GetYaxis()->SetTitleFont(42);
   Graph_Graph01044->GetZaxis()->SetLabelFont(42);
   Graph_Graph01044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01044);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
