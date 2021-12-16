void S12_AEDMOverMaxDiff_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1476,-0.01263309,3411.031,0.06774956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
   452.8872,
   656.3485,
   884.581,
   1123.521,
   1363.535,
   1601.503,
   1825.269,
   2100.54,
   2414.205,
   2638.053,
   2790.781};
   Double_t Graph0_fy1107[11] = {
   -0.000510356,
   0.001415441,
   0.0004943772,
   0.0003518734,
   0.0003671611,
   0.001725219,
   0.002547289,
   0.01650461,
   0.001745047,
   9.314637e-05,
   0.01312769};
   Double_t Graph0_fex1107[11] = {
   0.2848927,
   0.2126365,
   0.1423016,
   0.1309017,
   0.1503931,
   0.2140097,
   0.4416789,
   2.4969,
   1.046089,
   0.5704598,
   0.500334};
   Double_t Graph0_fey1107[11] = {
   -0.002253952,
   0.0006402832,
   0.0003318515,
   0.0002645626,
   0.0003191524,
   0.00050448,
   0.00173159,
   0.008604298,
   0.004295372,
   0.00214159,
   0.004346078};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12_",100,218.7344,3025.149);
   Graph_Graph01107->SetMinimum(-0.004594823);
   Graph_Graph01107->SetMaximum(0.0597113);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(0,101);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
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
