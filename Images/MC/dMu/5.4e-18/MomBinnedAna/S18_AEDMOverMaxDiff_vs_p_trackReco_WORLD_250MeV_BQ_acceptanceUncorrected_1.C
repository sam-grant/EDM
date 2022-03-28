void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceUncorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 14:31:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.5026,-0.002076612,3375.03,0.005297314);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1144[11] = {
   452.0435,
   653.272,
   880.5375,
   1123.045,
   1370.865,
   1619.752,
   1866.477,
   2115.066,
   2363.253,
   2612.125,
   2787.407};
   Double_t Graph0_fy1144[11] = {
   -0.0001625073,
   0.0008317365,
   0.001008191,
   0.0008998843,
   0.001247931,
   0.001336723,
   0.001620039,
   0.001261669,
   0.001855908,
   0.003536223,
   0.0009420843};
   Double_t Graph0_fex1144[11] = {
   0.09826267,
   0.08285708,
   0.059752,
   0.05831092,
   0.06253898,
   0.069287,
   0.08176819,
   0.1027065,
   0.135047,
   0.1614989,
   0.2033171};
   Double_t Graph0_fey1144[11] = {
   -0.0007423205,
   0.0002751686,
   0.0001888615,
   0.000176103,
   0.0001672429,
   0.0001727958,
   0.0002361901,
   0.0002948193,
   0.0003766802,
   0.0005321029,
   0.001789708};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1144,Graph0_fy1144,Graph0_fex1144,Graph0_fey1144);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01144 = new TH1F("Graph_Graph01144","S18_",100,218.3787,3021.177);
   Graph_Graph01144->SetMinimum(-0.001339219);
   Graph_Graph01144->SetMaximum(0.004559921);
   Graph_Graph01144->SetDirectory(0);
   Graph_Graph01144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01144->SetLineColor(ci);
   Graph_Graph01144->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01144->GetXaxis()->SetRange(0,100);
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
