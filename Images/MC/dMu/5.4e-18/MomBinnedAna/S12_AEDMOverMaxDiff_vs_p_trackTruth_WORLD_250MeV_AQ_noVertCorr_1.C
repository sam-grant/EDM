void S12_AEDMOverMaxDiff_vs_p_trackTruth_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:26:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-376.9979,-0.009898791,3392.981,0.0053296);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[12] = {
   107.0415,
   434.1376,
   631.5016,
   875.6458,
   1124.392,
   1373.48,
   1622.531,
   1871.467,
   2120.036,
   2367.864,
   2613.349,
   2836.139};
   Double_t Graph0_fy1111[12] = {
   -0.007360726,
   0.001064168,
   0.0007590521,
   0.001180919,
   0.001578627,
   0.002180062,
   0.002332583,
   0.002654193,
   0.002254447,
   0.002262547,
   0.002266515,
   0.002267401};
   Double_t Graph0_fex1111[12] = {
   1.218077,
   0.03919407,
   0.03259183,
   0.0311054,
   0.03118583,
   0.03195177,
   0.03349835,
   0.03596199,
   0.03978668,
   0.04580633,
   0.05663993,
   0.08215769};
   Double_t Graph0_fey1111[12] = {
   -0.005745875,
   0.0002127223,
   0.0001143062,
   0.0001140665,
   0.000116848,
   0.0001209159,
   0.0001270127,
   0.0001373411,
   0.0001496286,
   0.0001701909,
   0.0002098457,
   0.0003155801};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","S12_",100,0,3109.261);
   Graph_Graph01111->SetMinimum(-0.008375952);
   Graph_Graph01111->SetMaximum(0.003806761);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01111->GetXaxis()->SetRange(1,97);
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
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
