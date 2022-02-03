void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7144,-0.01735933,3408.481,0.007773616);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1144[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t Graph0_fy1144[11] = {
   -0.002821854,
   0.0009834452,
   0.0009017774,
   0.0007498177,
   0.001256408,
   0.00197453,
   0.002030693,
   0.001161945,
   0.0004622888,
   0.004433641,
   -0.002214891};
   Double_t Graph0_fex1144[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t Graph0_fey1144[11] = {
   -0.00145494,
   0.0005454486,
   0.0003924703,
   0.0003743661,
   0.0004165665,
   0.0004651661,
   0.0005530159,
   0.0006340594,
   0.0008047467,
   0.001205009,
   -0.003937445};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1144,Graph0_fy1144,Graph0_fex1144,Graph0_fey1144);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01144 = new TH1F("Graph_Graph01144","S18_",100,217.9537,3022.812);
   Graph_Graph01144->SetMinimum(-0.01484604);
   Graph_Graph01144->SetMaximum(0.005260321);
   Graph_Graph01144->SetDirectory(0);
   Graph_Graph01144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01144->SetLineColor(ci);
   Graph_Graph01144->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01144->GetXaxis()->SetRange(0,101);
   Graph_Graph01144->GetXaxis()->CenterTitle(true);
   Graph_Graph01144->GetXaxis()->SetLabelFont(42);
   Graph_Graph01144->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01144->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01144->GetXaxis()->SetTitleFont(42);
   Graph_Graph01144->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01144->GetYaxis()->CenterTitle(true);
   Graph_Graph01144->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01144->GetYaxis()->SetLabelFont(42);
   Graph_Graph01144->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01144->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01144->GetYaxis()->SetTitleFont(42);
   Graph_Graph01144->GetZaxis()->SetLabelFont(42);
   Graph_Graph01144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01144->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01144);
   
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
