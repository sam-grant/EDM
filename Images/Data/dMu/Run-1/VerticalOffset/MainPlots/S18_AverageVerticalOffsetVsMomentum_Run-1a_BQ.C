void S18_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[18] = {
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
   Double_t Graph0_fy1013[18] = {
   2.413976,
   -0.09297774,
   0.04077864,
   0.3686754,
   -0.4608825,
   -0.5355526,
   -0.4629962,
   -0.3939905,
   -0.256674,
   -0.03335,
   -0.0904144,
   -0.0491115,
   -0.06583211,
   0.03972139,
   0.001489033,
   -0.0934737,
   -0.1702714,
   -0.04531704};
   Double_t Graph0_fex1013[18] = {
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
   Double_t Graph0_fey1013[18] = {
   0.1325454,
   0.08143405,
   0.0571481,
   0.047187,
   0.04156565,
   0.03765752,
   0.03563705,
   0.03393848,
   0.03397601,
   0.03298408,
   0.03441099,
   0.03499546,
   0.03681909,
   0.03757035,
   0.03928217,
   0.04257075,
   0.04315265,
   0.04722922};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","S18",100,349.5,2899.5);
   Graph_Graph01013->SetMinimum(-1.5);
   Graph_Graph01013->SetMaximum(2.5);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1014[18] = {
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
   Double_t Graph0_fy1014[18] = {
   2.413976,
   -0.09297774,
   0.04077864,
   0.3686754,
   -0.4608825,
   -0.5355526,
   -0.4629962,
   -0.3939905,
   -0.256674,
   -0.03335,
   -0.0904144,
   -0.0491115,
   -0.06583211,
   0.03972139,
   0.001489033,
   -0.0934737,
   -0.1702714,
   -0.04531704};
   Double_t Graph0_fex1014[18] = {
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
   Double_t Graph0_fey1014[18] = {
   0.1325454,
   0.08143405,
   0.0571481,
   0.047187,
   0.04156565,
   0.03765752,
   0.03563705,
   0.03393848,
   0.03397601,
   0.03298408,
   0.03441099,
   0.03499546,
   0.03681909,
   0.03757035,
   0.03928217,
   0.04257075,
   0.04315265,
   0.04722922};
   gre = new TGraphErrors(18,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010131014 = new TH1F("Graph_Graph_Graph010131014","S18",100,349.5,2899.5);
   Graph_Graph_Graph010131014->SetMinimum(-1.5);
   Graph_Graph_Graph010131014->SetMaximum(2.5);
   Graph_Graph_Graph010131014->SetDirectory(0);
   Graph_Graph_Graph010131014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010131014->SetLineColor(ci);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010131014->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010131014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010131014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010131014->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010131014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010131014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010131014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010131014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010131014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010131014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010131014);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
