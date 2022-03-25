void S18_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-110.5585,3218.25,75.4669);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[18] = {
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
   Double_t Graph0_fy1073[18] = {
   -59.55718,
   -62.64595,
   -37.79043,
   -35.68991,
   -31.9329,
   -35.57351,
   -33.1649,
   -29.47513,
   -29.39665,
   -32.32418,
   -30.04798,
   -31.15418,
   -28.6477,
   -14.83557,
   -18.9417,
   -9.254125,
   -25.10584,
   -41.38494};
   Double_t Graph0_fex1073[18] = {
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
   Double_t Graph0_fey1073[18] = {
   14.00761,
   8.616116,
   6.024648,
   4.978025,
   4.380844,
   3.960658,
   3.75423,
   3.575342,
   3.585954,
   3.493861,
   3.659578,
   3.702765,
   3.897347,
   3.976043,
   4.181683,
   4.5042,
   4.734327,
   5.135868};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,349.5,2899.5);
   Graph_Graph01073->SetMinimum(-91.95599);
   Graph_Graph01073->SetMaximum(56.86435);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1074[18] = {
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
   Double_t Graph1_fy1074[18] = {
   40.1632,
   40.45412,
   28.48875,
   28.55631,
   22.73226,
   21.10302,
   19.04074,
   15.82896,
   15.52218,
   13.50852,
   12.91343,
   11.39496,
   9.341878,
   5.771774,
   7.08444,
   3.065892,
   6.562854,
   3.384423};
   Double_t Graph1_fex1074[18] = {
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
   Double_t Graph1_fey1074[18] = {
   5.328281,
   3.258575,
   2.259506,
   1.858341,
   1.626834,
   1.467925,
   1.385521,
   1.316183,
   1.317285,
   1.280338,
   1.334944,
   1.345149,
   1.412834,
   1.440149,
   1.509194,
   1.637302,
   1.711677,
   1.906046};
   gre = new TGraphErrors(18,Graph1_fx1074,Graph1_fy1074,Graph1_fex1074,Graph1_fey1074);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11074 = new TH1F("Graph_Graph11074","Graph",100,349.5,2899.5);
   Graph_Graph11074->SetMinimum(1.285731);
   Graph_Graph11074->SetMaximum(49.89777);
   Graph_Graph11074->SetDirectory(0);
   Graph_Graph11074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11074->SetLineColor(ci);
   Graph_Graph11074->GetXaxis()->SetLabelFont(42);
   Graph_Graph11074->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11074->GetXaxis()->SetTitleFont(42);
   Graph_Graph11074->GetYaxis()->SetLabelFont(42);
   Graph_Graph11074->GetYaxis()->SetTitleFont(42);
   Graph_Graph11074->GetZaxis()->SetLabelFont(42);
   Graph_Graph11074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11074);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1075[18] = {
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
   Double_t Graph2_fy1075[18] = {
   1.927432,
   -0.5711939,
   -0.3922313,
   -0.04221432,
   -0.7950979,
   -0.6846529,
   -0.7342327,
   -0.5869999,
   -0.4323205,
   -0.3155334,
   -0.266477,
   -0.1541802,
   -0.1489293,
   -0.1746512,
   -0.1345046,
   -0.2231186,
   -0.04429267,
   0.02700009};
   Double_t Graph2_fex1075[18] = {
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
   Double_t Graph2_fey1075[18] = {
   0.08051374,
   0.04975515,
   0.03486309,
   0.02882341,
   0.02542031,
   0.02302889,
   0.02186929,
   0.02085262,
   0.02093849,
   0.02039589,
   0.02142253,
   0.02170749,
   0.02288325,
   0.02338062,
   0.02460299,
   0.02650435,
   0.02786635,
   0.0300786};
   gre = new TGraphErrors(18,Graph2_fx1075,Graph2_fy1075,Graph2_fex1075,Graph2_fey1075);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21075 = new TH1F("Graph_Graph21075","Graph",100,349.5,2899.5);
   Graph_Graph21075->SetMinimum(-1.103365);
   Graph_Graph21075->SetMaximum(2.290792);
   Graph_Graph21075->SetDirectory(0);
   Graph_Graph21075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21075->SetLineColor(ci);
   Graph_Graph21075->GetXaxis()->SetLabelFont(42);
   Graph_Graph21075->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21075->GetXaxis()->SetTitleFont(42);
   Graph_Graph21075->GetYaxis()->SetLabelFont(42);
   Graph_Graph21075->GetYaxis()->SetTitleFont(42);
   Graph_Graph21075->GetZaxis()->SetLabelFont(42);
   Graph_Graph21075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21075);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1d","h");
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
