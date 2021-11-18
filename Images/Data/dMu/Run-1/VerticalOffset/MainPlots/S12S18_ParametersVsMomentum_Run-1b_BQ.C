void S12S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:34:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-93.75,3218.25,93.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1028[18] = {
   -22.20699,
   -13.95827,
   -10.11878,
   -8.584998,
   -12.854,
   -12.93553,
   -15.88458,
   -17.10118,
   -13.24762,
   -13.17933,
   -16.71224,
   -16.1648,
   -10.17572,
   -8.228865,
   -14.48611,
   -12.38156,
   -22.70364,
   -13.24012};
   Double_t Graph0_fex1028[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1028[18] = {
   12.15543,
   7.306112,
   5.060125,
   4.160279,
   3.661823,
   3.298155,
   3.095682,
   2.933771,
   2.926541,
   2.836079,
   2.936587,
   2.962975,
   3.098434,
   3.142919,
   3.277707,
   3.53457,
   3.740181,
   4.024291};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","S12S18",100,349.5,2899.5);
   Graph_Graph01028->SetMinimum(-75);
   Graph_Graph01028->SetMaximum(75);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1029[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph1_fy1029[18] = {
   48.69212,
   27.50937,
   26.97043,
   32.24846,
   28.86609,
   23.00727,
   25.18082,
   18.17465,
   18.30084,
   16.80329,
   16.10759,
   16.18758,
   8.353806,
   5.067011,
   10.78001,
   12.71125,
   18.16036,
   2.498245};
   Double_t Graph1_fex1029[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1029[18] = {
   16.01371,
   9.615068,
   6.64695,
   5.458873,
   4.796256,
   4.301617,
   4.014678,
   3.805914,
   3.773568,
   3.663698,
   3.771381,
   3.806103,
   3.976563,
   4.027126,
   4.192953,
   4.51677,
   4.783744,
   5.253366};
   gre = new TGraphErrors(18,Graph1_fx1029,Graph1_fy1029,Graph1_fex1029,Graph1_fey1029);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11029 = new TH1F("Graph_Graph11029","Graph",100,349.5,2899.5);
   Graph_Graph11029->SetMinimum(-9.501216);
   Graph_Graph11029->SetMaximum(71.45192);
   Graph_Graph11029->SetDirectory(0);
   Graph_Graph11029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11029->SetLineColor(ci);
   Graph_Graph11029->GetXaxis()->SetLabelFont(42);
   Graph_Graph11029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11029->GetXaxis()->SetTitleFont(42);
   Graph_Graph11029->GetYaxis()->SetLabelFont(42);
   Graph_Graph11029->GetYaxis()->SetTitleFont(42);
   Graph_Graph11029->GetZaxis()->SetLabelFont(42);
   Graph_Graph11029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11029);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1030[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph2_fy1030[18] = {
   2.509665,
   -0.06343194,
   0.2022744,
   0.4611658,
   -0.3059834,
   -0.3158655,
   -0.4264345,
   -0.339615,
   -0.1960432,
   -0.1005259,
   -0.0268767,
   0.02624802,
   -0.02528622,
   -0.01368258,
   0.04626117,
   -0.002244755,
   0.1170716,
   0.120759};
   Double_t Graph2_fex1030[18] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1030[18] = {
   0.07617211,
   0.0459897,
   0.03193405,
   0.02632648,
   0.02321175,
   0.02097249,
   0.01975264,
   0.01875506,
   0.01874947,
   0.01818237,
   0.01888609,
   0.01910809,
   0.01999897,
   0.02033157,
   0.02123773,
   0.02293627,
   0.02419392,
   0.02603482};
   gre = new TGraphErrors(18,Graph2_fx1030,Graph2_fy1030,Graph2_fex1030,Graph2_fey1030);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21030 = new TH1F("Graph_Graph21030","Graph",100,349.5,2899.5);
   Graph_Graph21030->SetMinimum(-0.7493896);
   Graph_Graph21030->SetMaximum(2.889039);
   Graph_Graph21030->SetDirectory(0);
   Graph_Graph21030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21030->SetLineColor(ci);
   Graph_Graph21030->GetXaxis()->SetLabelFont(42);
   Graph_Graph21030->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21030->GetXaxis()->SetTitleFont(42);
   Graph_Graph21030->GetYaxis()->SetLabelFont(42);
   Graph_Graph21030->GetYaxis()->SetTitleFont(42);
   Graph_Graph21030->GetZaxis()->SetLabelFont(42);
   Graph_Graph21030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21030);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1b","h");
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

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
