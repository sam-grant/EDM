#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 10 15:15:56 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-53.92029,3125,77.7956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1182[9] = {
   -25.01553,
   -12.36118,
   -14.06765,
   -10.59401,
   -15.88041,
   -10.70728,
   -14.69111,
   -8.165017,
   -19.76143};
   Double_t Graph0_fex1182[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1182[9] = {
   7.583428,
   3.943688,
   3.008986,
   2.646432,
   2.558539,
   2.655975,
   2.838107,
   3.128153,
   3.561945};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S18",100,425,2825);
   Graph_Graph01182->SetMinimum(-40.7487);
   Graph_Graph01182->SetMaximum(64.62401);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("Parameter value [mrad]");
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
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1183[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1183[9] = {
   47.52174,
   32.48863,
   24.7619,
   18.28379,
   17.89886,
   11.52205,
   13.30339,
   7.035325,
   7.516197};
   Double_t Graph1_fex1183[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1183[9] = {
   4.17747,
   2.153466,
   1.640346,
   1.434344,
   1.382238,
   1.427798,
   1.517015,
   1.669053,
   1.901564};
   gre = new TGraphErrors(9,Graph1_fx1183,Graph1_fy1183,Graph1_fex1183,Graph1_fey1183);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11183 = new TH1F("Graph_Graph11183","Graph",100,425,2825);
   Graph_Graph11183->SetMinimum(0.7329785);
   Graph_Graph11183->SetMaximum(56.3325);
   Graph_Graph11183->SetDirectory(0);
   Graph_Graph11183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11183->SetLineColor(ci);
   Graph_Graph11183->GetXaxis()->SetLabelFont(42);
   Graph_Graph11183->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11183->GetXaxis()->SetTitleFont(42);
   Graph_Graph11183->GetYaxis()->SetLabelFont(42);
   Graph_Graph11183->GetYaxis()->SetTitleFont(42);
   Graph_Graph11183->GetZaxis()->SetLabelFont(42);
   Graph_Graph11183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11183);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1184[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1184[9] = {
   0.5044112,
   0.02486684,
   -0.5612193,
   -0.5199842,
   -0.2625224,
   -0.152718,
   -0.100935,
   -0.08651203,
   0.02017286};
   Double_t Graph2_fex1184[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1184[9] = {
   0.04881871,
   0.0255081,
   0.01952225,
   0.01725081,
   0.01672195,
   0.01739467,
   0.01866075,
   0.02064249,
   0.02337313};
   gre = new TGraphErrors(9,Graph2_fx1184,Graph2_fy1184,Graph2_fex1184,Graph2_fey1184);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21184 = new TH1F("Graph_Graph21184","Graph",100,425,2825);
   Graph_Graph21184->SetMinimum(-0.6941386);
   Graph_Graph21184->SetMaximum(0.666627);
   Graph_Graph21184->SetDirectory(0);
   Graph_Graph21184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21184->SetLineColor(ci);
   Graph_Graph21184->GetXaxis()->SetLabelFont(42);
   Graph_Graph21184->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21184->GetXaxis()->SetTitleFont(42);
   Graph_Graph21184->GetYaxis()->SetLabelFont(42);
   Graph_Graph21184->GetYaxis()->SetTitleFont(42);
   Graph_Graph21184->GetZaxis()->SetLabelFont(42);
   Graph_Graph21184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21184);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1c","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
