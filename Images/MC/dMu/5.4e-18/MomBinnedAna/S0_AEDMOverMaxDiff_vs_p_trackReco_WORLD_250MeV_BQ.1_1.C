void S0_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4604,-0.007320138,3409.867,0.006298976);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[11] = {
   451.5017,
   653.2126,
   879.9286,
   1123.095,
   1371.312,
   1620.794,
   1868.128,
   2116.549,
   2363.467,
   2615.613,
   2789.755};
   Double_t Graph0_fy1070[11] = {
   0.001404715,
   0.000413717,
   0.001253052,
   0.001308525,
   0.002264498,
   0.001853282,
   0.001969733,
   0.002070325,
   0.001129042,
   0.0008372099,
   -0.001549944};
   Double_t Graph0_fex1070[11] = {
   0.1864231,
   0.1583684,
   0.1154331,
   0.1128051,
   0.1201848,
   0.132627,
   0.1524343,
   0.1843167,
   0.2313112,
   0.2891107,
   0.3358942};
   Double_t Graph0_fey1070[11] = {
   0.001411817,
   0.0005486312,
   0.0003843587,
   0.0003442342,
   0.0004018406,
   0.000413583,
   0.0004966632,
   0.000601791,
   0.0006634068,
   0.001018006,
   -0.002989947};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0_",100,217.4377,3023.969);
   Graph_Graph01070->SetMinimum(-0.005958226);
   Graph_Graph01070->SetMaximum(0.004937065);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(0,101);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
