void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.655,-0.007623715,3375.214,0.02604417);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[11] = {
   451.9205,
   653.3256,
   880.4131,
   1123.111,
   1371.001,
   1620.004,
   1866.718,
   2115.057,
   2362.933,
   2613.244,
   2787.597};
   Double_t Graph0_fy1182[11] = {
   0.000950997,
   0.004777129,
   0.005498069,
   0.006891506,
   0.008650179,
   0.01120993,
   0.01176631,
   0.01127452,
   0.01217632,
   0.01810974,
   0.006386699};
   Double_t Graph0_fex1182[11] = {
   0.06923884,
   0.05844202,
   0.04224623,
   0.04125547,
   0.04409091,
   0.04876799,
   0.057231,
   0.07179153,
   0.09404302,
   0.1141166,
   0.1415717};
   Double_t Graph0_fey1182[11] = {
   0.002963398,
   0.001198539,
   0.0008351552,
   0.0008101303,
   0.0008666906,
   0.0009593492,
   0.001128807,
   0.001414114,
   0.001850444,
   0.00232311,
   0.006849663};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18_",100,218.2625,3021.327);
   Graph_Graph01182->SetMinimum(-0.004256927);
   Graph_Graph01182->SetMaximum(0.02267738);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->SetRange(0,100);
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
