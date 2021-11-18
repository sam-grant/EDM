void S18_ParametersVsMomentum_Run-1c_BQ()
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
   
   Double_t Graph0_fx1038[18] = {
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
   Double_t Graph0_fy1038[18] = {
   -19.4581,
   -24.90723,
   -17.51037,
   -17.71295,
   -14.45626,
   -19.84312,
   -15.35394,
   -10.71557,
   -22.49401,
   -19.39214,
   -14.37268,
   -11.18561,
   -15.23693,
   -27.2114,
   -22.22493,
   -12.58114,
   -18.99358,
   -20.89708};
   Double_t Graph0_fex1038[18] = {
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
   Double_t Graph0_fey1038[18] = {
   21.16643,
   12.97993,
   9.100642,
   7.512845,
   6.602814,
   5.97355,
   5.653197,
   5.38824,
   5.400582,
   5.263469,
   5.501029,
   5.572951,
   5.854098,
   6.008455,
   6.277899,
   6.7856,
   7.108607,
   7.842315};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S18",100,349.5,2899.5);
   Graph_Graph01038->SetMinimum(-75);
   Graph_Graph01038->SetMaximum(75);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1039[18] = {
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
   Double_t Graph1_fy1039[18] = {
   27.70999,
   44.40236,
   41.16339,
   28.06133,
   21.23391,
   20.06342,
   14.55559,
   17.77477,
   19.90487,
   15.51504,
   6.041461,
   10.66932,
   10.02388,
   14.18295,
   10.20733,
   8.451522,
   4.505204,
   7.194834};
   Double_t Graph1_fex1039[18] = {
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
   Double_t Graph1_fey1039[18] = {
   14.38233,
   8.750312,
   6.121824,
   5.042256,
   4.432067,
   3.996371,
   3.759679,
   3.587149,
   3.593974,
   3.485195,
   3.629456,
   3.669883,
   3.865898,
   3.951993,
   4.112335,
   4.430175,
   4.684677,
   5.205269};
   gre = new TGraphErrors(18,Graph1_fx1039,Graph1_fy1039,Graph1_fex1039,Graph1_fey1039);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11039 = new TH1F("Graph_Graph11039","Graph",100,349.5,2899.5);
   Graph_Graph11039->SetMinimum(-5.512687);
   Graph_Graph11039->SetMaximum(58.48588);
   Graph_Graph11039->SetDirectory(0);
   Graph_Graph11039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11039->SetLineColor(ci);
   Graph_Graph11039->GetXaxis()->SetLabelFont(42);
   Graph_Graph11039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11039->GetXaxis()->SetTitleFont(42);
   Graph_Graph11039->GetYaxis()->SetLabelFont(42);
   Graph_Graph11039->GetYaxis()->SetTitleFont(42);
   Graph_Graph11039->GetZaxis()->SetLabelFont(42);
   Graph_Graph11039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11039);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1040[18] = {
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
   Double_t Graph2_fy1040[18] = {
   2.172185,
   -0.3332675,
   -0.1236998,
   0.1814183,
   -0.6014652,
   -0.4886025,
   -0.5593716,
   -0.4556562,
   -0.2768381,
   -0.2032292,
   -0.1666763,
   -0.106996,
   -0.1063727,
   -0.02579283,
   0.009295756,
   -0.08235825,
   -0.00538908,
   0.01566105};
   Double_t Graph2_fex1040[18] = {
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
   Double_t Graph2_fey1040[18] = {
   0.116678,
   0.07172112,
   0.05037425,
   0.04161834,
   0.03660078,
   0.03318454,
   0.0314752,
   0.0300439,
   0.03013566,
   0.02938195,
   0.03074716,
   0.03115568,
   0.032812,
   0.03373025,
   0.03530112,
   0.03824088,
   0.03985423,
   0.04390512};
   gre = new TGraphErrors(18,Graph2_fx1040,Graph2_fy1040,Graph2_fex1040,Graph2_fey1040);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21040 = new TH1F("Graph_Graph21040","Graph",100,349.5,2899.5);
   Graph_Graph21040->SetMinimum(-0.9307588);
   Graph_Graph21040->SetMaximum(2.581556);
   Graph_Graph21040->SetDirectory(0);
   Graph_Graph21040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21040->SetLineColor(ci);
   Graph_Graph21040->GetXaxis()->SetLabelFont(42);
   Graph_Graph21040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21040->GetXaxis()->SetTitleFont(42);
   Graph_Graph21040->GetYaxis()->SetLabelFont(42);
   Graph_Graph21040->GetYaxis()->SetTitleFont(42);
   Graph_Graph21040->GetZaxis()->SetLabelFont(42);
   Graph_Graph21040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21040);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1c","h");
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
