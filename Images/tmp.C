void tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 16 23:44:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-51.71429,70,85.42857,80);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   50,
   30,
   10,
   -10,
   -30};
   Double_t Graph0_fy1001[5] = {
   77.58543,
   76.35108,
   75.15796,
   73.95424,
   72.76476};
   Double_t Graph0_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[5] = {
   0.01318635,
   0.01313844,
   0.01307321,
   0.0134169,
   0.01342478};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT;#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,-38,58);
   Graph_Graph01001->SetMinimum(71);
   Graph_Graph01001->SetMaximum(79);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *fit1002 = new TF1("fit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   fit1002->SetFillColor(19);
   fit1002->SetFillStyle(0);
   fit1002->SetLineWidth(2);
   fit1002->SetChisquare(3.464162);
   fit1002->SetNDF(3);
   fit1002->GetXaxis()->SetLabelFont(42);
   fit1002->GetXaxis()->SetTitleOffset(1);
   fit1002->GetXaxis()->SetTitleFont(42);
   fit1002->GetYaxis()->SetLabelFont(42);
   fit1002->GetYaxis()->SetTitleFont(42);
   fit1002->SetParameter(0,74.56069);
   fit1002->SetParError(0,0.006318158);
   fit1002->SetParLimits(0,0,0);
   fit1002->SetParameter(1,0.06019296);
   fit1002->SetParError(1,0.0002102907);
   fit1002->SetParLimits(1,0,0);
   fit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1002);
   gre->Draw("ap");
   
   TF1 *fit1003 = new TF1("fit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   fit1003->SetFillColor(19);
   fit1003->SetFillStyle(0);
   fit1003->SetLineWidth(2);
   fit1003->SetChisquare(3.464162);
   fit1003->SetNDF(3);
   fit1003->GetXaxis()->SetLabelFont(42);
   fit1003->GetXaxis()->SetTitleOffset(1);
   fit1003->GetXaxis()->SetTitleFont(42);
   fit1003->GetYaxis()->SetLabelFont(42);
   fit1003->GetYaxis()->SetTitleFont(42);
   fit1003->SetParameter(0,74.56069);
   fit1003->SetParError(0,0.006318158);
   fit1003->SetParLimits(0,0,0);
   fit1003->SetParameter(1,0.06019296);
   fit1003->SetParError(1,0.0002102907);
   fit1003->SetParLimits(1,0,0);
   fit1003->Draw("same");
   
   Double_t Graph1_fx1003[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph1_fy1003[6] = {
   77.24747,
   76.13956,
   75.0552,
   74.06051,
   72.95215,
   71.91741};
   Double_t Graph1_fex1003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1003[6] = {
   0.01268397,
   0.01125804,
   0.01192798,
   0.01242639,
   0.01255356,
   0.0121433};
   gre = new TGraphErrors(6,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,-60,60);
   Graph_Graph11003->SetMinimum(71.36977);
   Graph_Graph11003->SetMaximum(77.79564);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   
   TF1 *fit1004 = new TF1("fit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   fit1004->SetFillColor(19);
   fit1004->SetFillStyle(0);
   fit1004->SetLineColor(2);
   fit1004->SetLineWidth(2);
   fit1004->SetChisquare(25.80655);
   fit1004->SetNDF(4);
   fit1004->GetXaxis()->SetLabelFont(42);
   fit1004->GetXaxis()->SetTitleOffset(1);
   fit1004->GetXaxis()->SetTitleFont(42);
   fit1004->GetYaxis()->SetLabelFont(42);
   fit1004->GetYaxis()->SetTitleFont(42);
   fit1004->SetParameter(0,74.56092);
   fit1004->SetParError(0,0.004955272);
   fit1004->SetParLimits(0,0,0);
   fit1004->SetParameter(1,0.05312037);
   fit1004->SetParError(1,0.0001464241);
   fit1004->SetParLimits(1,0,0);
   fit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1004);
   gre->Draw("p ");
   
   TF1 *fit1005 = new TF1("fit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   fit1005->SetFillColor(19);
   fit1005->SetFillStyle(0);
   fit1005->SetLineColor(2);
   fit1005->SetLineWidth(2);
   fit1005->SetChisquare(25.80655);
   fit1005->SetNDF(4);
   fit1005->GetXaxis()->SetLabelFont(42);
   fit1005->GetXaxis()->SetTitleOffset(1);
   fit1005->GetXaxis()->SetTitleFont(42);
   fit1005->GetYaxis()->SetLabelFont(42);
   fit1005->GetYaxis()->SetTitleFont(42);
   fit1005->SetParameter(0,74.56092);
   fit1005->SetParError(0,0.004955272);
   fit1005->SetParLimits(0,0,0);
   fit1005->SetParameter(1,0.05312037);
   fit1005->SetParError(1,0.0001464241);
   fit1005->SetParLimits(1,0,0);
   fit1005->Draw("same");
   
   Double_t Graph2_fx1005[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t Graph2_fy1005[5] = {
   76.96306,
   75.98884,
   74.04461,
   73.14082,
   72.203};
   Double_t Graph2_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1005[5] = {
   0.01212545,
   0.01188426,
   0.01167433,
   0.01212539,
   0.01229377};
   gre = new TGraphErrors(5,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,-60,60);
   Graph_Graph21005->SetMinimum(71.71226);
   Graph_Graph21005->SetMaximum(77.45363);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21005->SetLineColor(ci);
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineColor(3);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(18.76197);
   fit1006->SetNDF(3);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,74.56254);
   fit1006->SetParError(0,0.005378306);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.04763511);
   fit1006->SetParError(1,0.0001463598);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("p ");
   
   TF1 *fit1007 = new TF1("fit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   fit1007->SetFillColor(19);
   fit1007->SetFillStyle(0);
   fit1007->SetLineColor(3);
   fit1007->SetLineWidth(2);
   fit1007->SetChisquare(18.76197);
   fit1007->SetNDF(3);
   fit1007->GetXaxis()->SetLabelFont(42);
   fit1007->GetXaxis()->SetTitleOffset(1);
   fit1007->GetXaxis()->SetTitleFont(42);
   fit1007->GetYaxis()->SetLabelFont(42);
   fit1007->GetYaxis()->SetTitleFont(42);
   fit1007->SetParameter(0,74.56254);
   fit1007->SetParError(0,0.005378306);
   fit1007->SetParLimits(0,0,0);
   fit1007->SetParameter(1,0.04763511);
   fit1007->SetParError(1,0.0001463598);
   fit1007->SetParLimits(1,0,0);
   fit1007->Draw("same");
   
   Double_t Graph3_fx1007[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph3_fy1007[6] = {
   76.80587,
   75.91636,
   75.00336,
   74.14382,
   73.25735,
   72.33542};
   Double_t Graph3_fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1007[6] = {
   0.01225522,
   0.01181116,
   0.01168544,
   0.01180172,
   0.01213645,
   0.01190349};
   gre = new TGraphErrors(6,Graph3_fx1007,Graph3_fy1007,Graph3_fex1007,Graph3_fey1007);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31007 = new TH1F("Graph_Graph31007","Graph",100,-60,60);
   Graph_Graph31007->SetMinimum(71.87406);
   Graph_Graph31007->SetMaximum(77.26759);
   Graph_Graph31007->SetDirectory(0);
   Graph_Graph31007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31007->SetLineColor(ci);
   Graph_Graph31007->GetXaxis()->SetLabelFont(42);
   Graph_Graph31007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetXaxis()->SetTitleFont(42);
   Graph_Graph31007->GetYaxis()->SetLabelFont(42);
   Graph_Graph31007->GetYaxis()->SetTitleFont(42);
   Graph_Graph31007->GetZaxis()->SetLabelFont(42);
   Graph_Graph31007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31007);
   
   
   TF1 *fit1008 = new TF1("fit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   fit1008->SetFillColor(19);
   fit1008->SetFillStyle(0);
   fit1008->SetLineColor(4);
   fit1008->SetLineWidth(2);
   fit1008->SetChisquare(7.167245);
   fit1008->SetNDF(4);
   fit1008->GetXaxis()->SetLabelFont(42);
   fit1008->GetXaxis()->SetTitleOffset(1);
   fit1008->GetXaxis()->SetTitleFont(42);
   fit1008->GetYaxis()->SetLabelFont(42);
   fit1008->GetYaxis()->SetTitleFont(42);
   fit1008->SetParameter(0,74.57684);
   fit1008->SetParError(0,0.004869354);
   fit1008->SetParLimits(0,0,0);
   fit1008->SetParameter(1,0.04455664);
   fit1008->SetParError(1,0.0001438884);
   fit1008->SetParLimits(1,0,0);
   fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1008);
   gre->Draw("p ");
   
   TF1 *fit1009 = new TF1("fit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   fit1009->SetFillColor(19);
   fit1009->SetFillStyle(0);
   fit1009->SetLineColor(4);
   fit1009->SetLineWidth(2);
   fit1009->SetChisquare(7.167245);
   fit1009->SetNDF(4);
   fit1009->GetXaxis()->SetLabelFont(42);
   fit1009->GetXaxis()->SetTitleOffset(1);
   fit1009->GetXaxis()->SetTitleFont(42);
   fit1009->GetYaxis()->SetLabelFont(42);
   fit1009->GetYaxis()->SetTitleFont(42);
   fit1009->SetParameter(0,74.57684);
   fit1009->SetParError(0,0.004869354);
   fit1009->SetParLimits(0,0,0);
   fit1009->SetParameter(1,0.04455664);
   fit1009->SetParError(1,0.0001438884);
   fit1009->SetParLimits(1,0,0);
   fit1009->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","QHV [kV]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","   14","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","   16","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","   18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3"," 19.5","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
